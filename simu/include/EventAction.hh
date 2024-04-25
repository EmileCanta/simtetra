#ifndef EventAction_h
#define EventAction_h

#include "G4UserEventAction.hh"
#include "G4Event.hh"
#include "G4AnalysisManager.hh"
#include "G4RunManager.hh"

#include "RunAction.hh"

class MyEventAction : public G4UserEventAction
{
public:
    MyEventAction(MyRunAction* runAction);
    ~MyEventAction();
    
    virtual void BeginOfEventAction(const G4Event*);
    virtual void EndOfEventAction(const G4Event*);
    
    void AddEdep1(G4double edep) {fEdep += edep; }

    void AddEdepLow(G4double edeplow) {fEdepLow += edeplow; }

private:
    G4double fEdep, fEdepLow;
    
    MyRunAction *fRunAction;
};

#endif
