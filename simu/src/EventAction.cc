#include "EventAction.hh"

MyEventAction::MyEventAction(MyRunAction *runAction)
{
    fEdep = 0.;
    
    fEdepLow = 0.;
    
    fRunAction = runAction;
}

MyEventAction::~MyEventAction()
{}

void MyEventAction::BeginOfEventAction(const G4Event*)
{
    fEdep = 0.;

    fEdepLow = 0.;
}

void MyEventAction::EndOfEventAction(const G4Event*)
{
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    
    if(fEdep > 0.)
    {
        man->FillNtupleDColumn(1, 0, fEdep);
        man->AddNtupleRow(1);
    }

    if(fEdepLow > 0.)
    {
        man->FillNtupleDColumn(3, 0, fEdepLow);
        man->AddNtupleRow(3);
    }
}

