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
    
    man->CreateNtuple("fEdep", "fEdep");
    man->CreateNtupleDColumn("fEdep");
    man->FinishNtuple(1);
    
    man->CreateNtuple("Rings", "Rings");
    man->CreateNtupleDColumn("RingN");
    man->FinishNtuple(2);
    
    man->CreateNtuple("fEdepLow", "fEdepLow");
    man->CreateNtupleDColumn("fEdepLow");
    man->FinishNtuple(3);
    
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
