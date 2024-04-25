#ifndef DetectorConstruction_h
#define DetectorConstruction_h

#include "G4VUserDetectorConstruction.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4Tubs.hh"
#include "G4Sphere.hh"
#include "G4ExtrudedSolid.hh"
#include "G4UnionSolid.hh"
#include "G4SubtractionSolid.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh"
#include "G4GenericMessenger.hh"

class MyDetectorConstruction : public G4VUserDetectorConstruction
{

public :
	MyDetectorConstruction();
	~MyDetectorConstruction();
    
    G4LogicalVolume *GetScoringVolumeOne() const { return fScoringVolumeOne; }
    G4LogicalVolume *GetScoringVolumeTwo() const { return fScoringVolumeTwo; }
    G4LogicalVolume *GetScoringVolumeThree() const { return fScoringVolumeThree; }
    G4LogicalVolume *GetScoringVolumeFour() const { return fScoringVolumeFour; }
	
	virtual G4VPhysicalVolume *Construct();
    
private:
    G4LogicalVolume *logicCellOne, *logicCellTwo, *logicCellThree, *logicCellFour;
	
    G4LogicalVolume *fScoringVolumeOne, *fScoringVolumeTwo, *fScoringVolumeThree, *fScoringVolumeFour;
    
    G4double Pressure;
    
    G4GenericMessenger *fMessenger;
};

#endif
