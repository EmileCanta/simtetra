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
    
    G4LogicalVolume *GetSPVolume() const { return fSPVolume; }
	
	virtual G4VPhysicalVolume *Construct();
    
private:
    G4LogicalVolume *logicCellOne, *logicCellTwo, *logicCellThree, *logicCellFour;
	
    G4LogicalVolume *fScoringVolumeOne, *fScoringVolumeTwo, *fScoringVolumeThree, *fScoringVolumeFour;
    
    G4LogicalVolume *logicSP;
    
    G4LogicalVolume *fSPVolume;
    
    G4double Pressure;
    
    G4VSolid *solidWorld, *solidModPreSub, *solidHole, *solidLightGuide, *solidUni, *solidMod, *plasticOut, *plasticIn, *solidPlastic, *plexiOut, *plexiIn, *solidPlexi;
    G4LogicalVolume *logicWorld, *logicMod, *logicUni, *logicPlastic, *logicCyl, *logicPlexi, *logicVac;
    G4VPhysicalVolume *physWorld, *physMod, *physUni, *physPlastic, *physPlexi, *physSP, *physCell1, *physCell1bis, *physCell2, *physCell2bis, *physCell2bisbis, *physCell3, *physCell3bis, *physCell3bisbis, *physCell3bisbisbis, *physCell4, *physCell4bis, *physCell4bisbis, *physCell4bisbisbis, *physCell4bisbisbisbis, *physCyl1, *physCyl1bis, *physCyl2, *physCyl2bis, *physCyl2bisbis, *physCyl3, *physCyl3bis, *physCyl3bisbis, *physCyl3bisbisbis, *physCyl4, *physCyl4bis, *physCyl4bisbis, *physCyl4bisbisbis, *physCyl4bisbisbisbis, *physVac, *monoCell, *monoCyl;
    G4Tubs *solidCell, *solidCyl, *solidVac;
    G4Sphere *solidSP;
    
    G4GenericMessenger *fMessenger;
    
    G4Isotope *he3Iso;
    G4Element *he3;
    G4Material *co2, *gasMixOne, *gasMixTwo, *gasMixThree, *gasMixFour, *realVac, *air, *modMat, *bore, *borPol, *mod, *plasticMat, *steel, *plexi;
    
};

#endif
