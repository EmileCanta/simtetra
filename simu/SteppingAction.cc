#include "SteppingAction.hh"

MySteppingAction::MySteppingAction(MyEventAction *eventAction)
{
    fEventAction = eventAction;
}

MySteppingAction::~MySteppingAction()
{}

void MySteppingAction::UserSteppingAction(const G4Step *step)
{
    G4LogicalVolume *volume = step->GetPreStepPoint()->GetTouchableHandle()->GetVolume()->GetLogicalVolume();
    
    const MyDetectorConstruction *detectorConstruction = static_cast<const MyDetectorConstruction*> (G4RunManager::GetRunManager()->GetUserDetectorConstruction());
    
    G4LogicalVolume *fScoringVolumeOne = detectorConstruction->GetScoringVolumeOne();
    G4LogicalVolume *fScoringVolumeTwo = detectorConstruction->GetScoringVolumeTwo();
    G4LogicalVolume *fScoringVolumeThree = detectorConstruction->GetScoringVolumeThree();
    G4LogicalVolume *fScoringVolumeFour = detectorConstruction->GetScoringVolumeFour();
    
    G4LogicalVolume *fSPVolume = detectorConstruction->GetSPVolume();
    
    if(volume == fSPVolume)
    {
        if(step->GetTrack()->GetParticleDefinition()->GetParticleName() == "neutron")
        {
            if(step->IsFirstStepInVolume() == 1)
            {   
                G4AnalysisManager *man = G4AnalysisManager::Instance();
                
                fEventAction->IncNnum(count);
                
                man->FillNtupleDColumn(3, 0, step->GetPreStepPoint()->GetKineticEnergy());
    	        man->AddNtupleRow(3);
    	        
                time1 = step->GetTrack()->GetGlobalTime();
            }
        }
    }
    
    if(volume == fScoringVolumeOne || volume == fScoringVolumeTwo || volume == fScoringVolumeThree || volume == fScoringVolumeFour)
    {
        if(step->GetTrack()->GetParticleDefinition()->GetParticleName() == "triton")
        {   
            if(step->IsFirstStepInVolume() == 1)
            {   
                G4double time2 = step->GetTrack()->GetGlobalTime()-time1;
                
                const G4VTouchable *touchable = step->GetPreStepPoint()->GetTouchable();
                G4VPhysicalVolume *physVol = touchable->GetVolume();
                G4ThreeVector posDetector = physVol->GetTranslation();
                
                G4AnalysisManager *man = G4AnalysisManager::Instance();
                
                man->FillNtupleDColumn(0, 0, posDetector[0]);
                man->FillNtupleDColumn(0, 1, posDetector[1]);
                man->FillNtupleDColumn(0, 2, posDetector[2]);
                man->FillNtupleDColumn(0, 3, time2);
                man->AddNtupleRow(0);
                
                if(posDetector.getR() > 0. && posDetector.getR() <= 100.)
                {
                    man->FillNtupleDColumn(2, 0, 1);
                    man->AddNtupleRow(2);
                }
                if(posDetector.getR() > 100. && posDetector.getR() <= 150.)
                {
                    man->FillNtupleDColumn(2, 0, 2);
                    man->AddNtupleRow(2);
                }
                if(posDetector.getR() > 150. && posDetector.getR() <= 200.)
                {
                    man->FillNtupleDColumn(2, 0, 3);
                    man->AddNtupleRow(2);
                }
                if(posDetector.getR() > 200. && posDetector.getR() <= 250.)
                {
                    man->FillNtupleDColumn(2, 0, 4);
                    man->AddNtupleRow(2);
                }
            }
                
            if(fEventAction->GetNnum() == 1)
            {
                G4double edep1 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep1(edep1);
            }
            if(fEventAction->GetNnum() == 2)
            {
                G4double edep2 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep2(edep2);
            }
            if(fEventAction->GetNnum() == 3)
            {
                G4double edep3 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep3(edep3);
            }
            if(fEventAction->GetNnum() == 4)
            {
                G4double edep4 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep4(edep4);
            }
            if(fEventAction->GetNnum() == 5)
            {
                G4double edep5 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep5(edep5);
            }
            if(fEventAction->GetNnum() == 6)
            {
                G4double edep6 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep6(edep6);
            }
            if(fEventAction->GetNnum() == 7)
            {
                G4double edep7 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep7(edep7);
            }
            if(fEventAction->GetNnum() == 8)
            {
                G4double edep8 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep8(edep8);
            }
            if(fEventAction->GetNnum() == 9)
            {
                G4double edep9 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep9(edep9);
            }
            if(fEventAction->GetNnum() == 10)
            {
                G4double edep10 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep10(edep10);
            }
        }
            
        if(step->GetTrack()->GetParticleDefinition()->GetParticleName() == "proton")
        {   
            if(fEventAction->GetNnum() == 1)
            {
                G4double edep1 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep1(edep1);
            }
            if(fEventAction->GetNnum() == 2)
            {
                G4double edep2 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep2(edep2);
            }
            if(fEventAction->GetNnum() == 3)
            {
                G4double edep3 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep3(edep3);
            }
            if(fEventAction->GetNnum() == 4)
            {
                G4double edep4 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep4(edep4);
            }
            if(fEventAction->GetNnum() == 5)
            {
                G4double edep5 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep5(edep5);
            }
            if(fEventAction->GetNnum() == 6)
            {
                G4double edep6 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep6(edep6);
            }
            if(fEventAction->GetNnum() == 7)
            {
                G4double edep7 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep7(edep7);
            }
            if(fEventAction->GetNnum() == 8)
            {
                G4double edep8 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep8(edep8);
            }
            if(fEventAction->GetNnum() == 9)
            {
                G4double edep9 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep9(edep9);
            }
            if(fEventAction->GetNnum() == 10)
            {
                G4double edep10 = step->GetTotalEnergyDeposit();
                fEventAction->AddEdep10(edep10);
            }
        }
        
        if(step->GetTrack()->GetParticleDefinition()->GetParticleName() == "e-")
        {   
            G4double edeplow = step->GetTotalEnergyDeposit();
            fEventAction->AddEdepLow(edeplow);
        }
        
        if(step->GetTrack()->GetParticleDefinition()->GetParticleName() == "gamma")
        {   
            G4double edeplow = step->GetTotalEnergyDeposit();
            fEventAction->AddEdepLow(edeplow);
        }
    }
    
    
}
