#include "RunAction.hh"
#include "EventAction.hh"

MyRunAction::MyRunAction()
{
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    
    man->CreateNtuple("Hits", "Hits");
    man->CreateNtupleDColumn("fX");
    man->CreateNtupleDColumn("fY");
    man->CreateNtupleDColumn("fZ");
    man->CreateNtupleDColumn("fTime");
    man->FinishNtuple(0);
    
    man->CreateNtuple("N1", "N1");
    man->CreateNtupleDColumn("fEdep1");
    man->FinishNtuple(1);
    
    man->CreateNtuple("Rings", "Rings");
    man->CreateNtupleDColumn("RingN");
    man->FinishNtuple(2);
    
    man->CreateNtuple("Eneut", "Eneut");
    man->CreateNtupleDColumn("fEneut");
    man->FinishNtuple(3);
    
    man->CreateNtuple("Nmulti", "Nmulti");
    man->CreateNtupleDColumn("fNmulti");
    man->FinishNtuple(4);
    
    man->CreateNtuple("N2", "N2");
    man->CreateNtupleDColumn("fEdep2");
    man->FinishNtuple(5);
    
    man->CreateNtuple("N3", "N3");
    man->CreateNtupleDColumn("fEdep3");
    man->FinishNtuple(6);
    
    man->CreateNtuple("N4", "N4");
    man->CreateNtupleDColumn("fEdep4");
    man->FinishNtuple(7);
    
    man->CreateNtuple("N5", "N5");
    man->CreateNtupleDColumn("fEdep5");
    man->FinishNtuple(8);
    
    man->CreateNtuple("N6", "N6");
    man->CreateNtupleDColumn("fEdep6");
    man->FinishNtuple(9);
    
    man->CreateNtuple("N7", "N7");
    man->CreateNtupleDColumn("fEdep7");
    man->FinishNtuple(10);
    
    man->CreateNtuple("N8", "N8");
    man->CreateNtupleDColumn("fEdep8");
    man->FinishNtuple(11);
    
    man->CreateNtuple("N9", "N9");
    man->CreateNtupleDColumn("fEdep9");
    man->FinishNtuple(12);
    
    man->CreateNtuple("N10", "N10");
    man->CreateNtupleDColumn("fEdep10");
    man->FinishNtuple(13);
    
    man->CreateNtuple("LowEvents", "LowEvents");
    man->CreateNtupleDColumn("fEdepLow");
    man->FinishNtuple(14);
    
}

MyRunAction::~MyRunAction()
{}

void MyRunAction::BeginOfRunAction(const G4Run* run)
{
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    
    G4int runID = run->GetRunID();
    
    std::stringstream strRunID;
    strRunID << runID;
    
    man->OpenFile("../../../data/simtetra/output"+strRunID.str()+".root");
    
}

void MyRunAction::EndOfRunAction(const G4Run*)
{
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    man->Write();
    man->CloseFile();
}
