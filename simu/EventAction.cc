#include "EventAction.hh"

MyEventAction::MyEventAction(MyRunAction *runAction)
{
    fEdep1 = 0.;
    fEdep2 = 0.;
    fEdep3 = 0.;
    fEdep4 = 0.;
    fEdep5 = 0.;
    fEdep6 = 0.;
    fEdep7 = 0.;
    fEdep8 = 0.;
    fEdep9 = 0.;
    fEdep10 = 0.;
    fEdepLow = 0.;
    
    fRunAction = runAction;
}

MyEventAction::~MyEventAction()
{}

void MyEventAction::BeginOfEventAction(const G4Event*)
{
    fEdep1 = 0.;
    fEdep2 = 0.;
    fEdep3 = 0.;
    fEdep4 = 0.;
    fEdep5 = 0.;
    fEdep6 = 0.;
    fEdep7 = 0.;
    fEdep8 = 0.;
    fEdep9 = 0.;
    fEdep10 = 0.;
    fEdepLow = 0.;
    
    fNnum = 0.;
}

void MyEventAction::EndOfEventAction(const G4Event*)
{
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    
    if(fEdep1 > 0.)
    {
        man->FillNtupleDColumn(1, 0, fEdep1);
        man->AddNtupleRow(1);
    }
    if(fEdep2 > 0.)
    {
        man->FillNtupleDColumn(5, 0, fEdep2);
        man->AddNtupleRow(5);
    }
    if(fEdep3 > 0.)
    {
        man->FillNtupleDColumn(6, 0, fEdep3);
        man->AddNtupleRow(6);
    }
    if(fEdep4 > 0.)
    {
        man->FillNtupleDColumn(7, 0, fEdep4);
        man->AddNtupleRow(7);
    }
    if(fEdep5 > 0.)
    {
        man->FillNtupleDColumn(8, 0, fEdep5);
        man->AddNtupleRow(8);
    }
    if(fEdep6 > 0.)
    {
        man->FillNtupleDColumn(9, 0, fEdep6);
        man->AddNtupleRow(9);
    }
    if(fEdep7 > 0.)
    {
        man->FillNtupleDColumn(10, 0, fEdep7);
        man->AddNtupleRow(10);
    }
    if(fEdep8 > 0.)
    {
        man->FillNtupleDColumn(11, 0, fEdep8);
        man->AddNtupleRow(11);
    }
    if(fEdep9 > 0.)
    {
        man->FillNtupleDColumn(12, 0, fEdep9);
        man->AddNtupleRow(12);
    }
    if(fEdep10 > 0.)
    {
        man->FillNtupleDColumn(13, 0, fEdep10);
        man->AddNtupleRow(13);
    }
    if(fEdepLow > 0.)
    {
        man->FillNtupleDColumn(14, 0, fEdepLow);
        man->AddNtupleRow(14);
    }
    
    if(fNnum > 0)
    {
        man->FillNtupleDColumn(4, 0, fNnum);
        man->AddNtupleRow(4);
    }
}

