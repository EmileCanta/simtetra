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
    
    void AddEdep1(G4double edep1) {fEdep1 += edep1; }
    void AddEdep2(G4double edep2) {fEdep2 += edep2; }
    void AddEdep3(G4double edep3) {fEdep3 += edep3; }
    void AddEdep4(G4double edep4) {fEdep4 += edep4; }
    void AddEdep5(G4double edep5) {fEdep5 += edep5; }
    void AddEdep6(G4double edep6) {fEdep6 += edep6; }
    void AddEdep7(G4double edep7) {fEdep7 += edep7; }
    void AddEdep8(G4double edep8) {fEdep8 += edep8; }
    void AddEdep9(G4double edep9) {fEdep9 += edep9; }
    void AddEdep10(G4double edep10) {fEdep10 += edep10; }
    void AddEdepLow(G4double edeplow) {fEdepLow += edeplow; }
    
    void IncNnum(G4int count) {fNnum += count; }
    
    G4int GetNnum() {return fNnum;}
    
public:
    G4int fNnum;

private:
    G4double fEdep1, fEdep2, fEdep3, fEdep4, fEdep5, fEdep6, fEdep7, fEdep8, fEdep9, fEdep10, fEdepLow;
    
    MyRunAction *fRunAction;
};

#endif
