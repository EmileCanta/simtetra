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
    
    if(volume != fScoringVolumeOne && volume != fScoringVolumeTwo && volume != fScoringVolumeThree && volume != fScoringVolumeFour)
        return;
    
    if(step->GetTrack()->GetParticleDefinition()->GetParticleName() == "triton")
    {   
        if(step->IsFirstStepInVolume() == 1)
        {   
            const G4VTouchable *touchable = step->GetPreStepPoint()->GetTouchable();
            G4VPhysicalVolume *physVol = touchable->GetVolume();
            G4ThreeVector posDetector = physVol->GetTranslation();
            
            G4AnalysisManager *man = G4AnalysisManager::Instance();
            
            man->FillNtupleDColumn(0, 0, posDetector[0]);
            man->FillNtupleDColumn(0, 1, posDetector[1]);
            man->FillNtupleDColumn(0, 2, posDetector[2]);
            
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

        G4double edep1 = step->GetTotalEnergyDeposit();
        fEventAction->AddEdep1(edep1);
    }
        
    if(step->GetTrack()->GetParticleDefinition()->GetParticleName() == "proton")
    {   
        G4double edep1 = step->GetTotalEnergyDeposit();
        fEventAction->AddEdep1(edep1);
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
