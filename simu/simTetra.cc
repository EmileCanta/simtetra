#include <iostream>

#include "G4RunManager.hh"
#include "G4MTRunManager.hh"
#include "G4UIExecutive.hh"
#include "G4VisExecutive.hh"
#include "G4VisManager.hh"
#include "G4UImanager.hh"
#include "G4SteppingVerbose.hh"
#include "Randomize.hh"

#include "DetectorConstruction.hh"
#include "PhysicsList.hh"
#include "ActionInitialization.hh"

#include "G4ParticleHPManager.hh"

int main(int argc, char** argv)
{
	
	#ifdef G4MULTITHREADED
		G4MTRunManager *runManager = new G4MTRunManager();
	#else	
		G4RunManager *runManager = new G4RunManager();
	#endif

	G4Random::setTheEngine(new CLHEP::RanecuEngine);

	G4int precision = 4;
  	G4SteppingVerbose::UseBestUnit(precision);
	
	runManager->SetUserInitialization(new MyDetectorConstruction());
	runManager->SetUserInitialization(new MyPhysicsList());
	runManager->SetUserInitialization(new MyActionInitialization());

	G4ParticleHPManager::GetInstance()->SetSkipMissingIsotopes( true );
	G4ParticleHPManager::GetInstance()->SetDoNotAdjustFinalState( true );
	G4ParticleHPManager::GetInstance()->SetUseOnlyPhotoEvaporation( false );
	G4ParticleHPManager::GetInstance()->SetNeglectDoppler( false );
	G4ParticleHPManager::GetInstance()->SetProduceFissionFragments( false );
	G4ParticleHPManager::GetInstance()->SetUseWendtFissionModel( false );
	G4ParticleHPManager::GetInstance()->SetUseNRESP71Model( false );
	
	G4UIExecutive *ui = 0;
	
	if(argc == 1)
	{
		ui = new G4UIExecutive(argc, argv);
	}
	
	G4VisManager *visManager = new G4VisExecutive();
	visManager->Initialize();
	
	G4UImanager *UImanager = G4UImanager::GetUIpointer();
	
	if(ui)
	{
		UImanager->ApplyCommand("/control/execute vis.mac");
		ui->SessionStart();
	}
	else
	{
		G4String command = "/control/execute ";
		G4String fileName = argv[1];
		UImanager->ApplyCommand(command+fileName);
	}
	
	return 0;
}
