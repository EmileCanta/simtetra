#include "DetectorConstruction.hh"

MyDetectorConstruction::MyDetectorConstruction()
{
    fMessenger = new G4GenericMessenger(this, "/detector/", "Detector Construction");
    
    fMessenger->DeclareProperty("Pressure", Pressure, "Pressure in gas");
    
    Pressure = 7*6.32420e+08; // MeV/mm3
}

MyDetectorConstruction::~MyDetectorConstruction()
{}

G4VPhysicalVolume *MyDetectorConstruction::Construct()
{	
	G4NistManager *nist = G4NistManager::Instance();
	
//MATERIALS AND ELEMENTS

	//Helium 3
	G4double atomicMass = 3.016*g/mole;
	
	he3Iso = new G4Isotope("he3Iso", 2, 3, atomicMass);
	
	he3 = new G4Element("he3", "he3", 1);
	
	he3->AddIsotope(he3Iso, 100.*perCent);

    //Cell gas mixture
    G4double    temperatureCell = 293.*kelvin,
                molar_constant = CLHEP::Avogadro*CLHEP::k_Boltzmann;
	
	G4double    pressureCellOne = 4.8*atmosphere,
                densityCellOne = (atomicMass*pressureCellOne)/(temperatureCell*molar_constant);

    G4double    pressureCellTwo = 5.58*atmosphere,
                densityCellTwo = (atomicMass*pressureCellTwo)/(temperatureCell*molar_constant);

    G4double    pressureCellThree = 5.76*atmosphere,
                densityCellThree = (atomicMass*pressureCellThree)/(temperatureCell*molar_constant);

    G4double    pressureCellFour = 5.78*atmosphere,
                densityCellFour = (atomicMass*pressureCellFour)/(temperatureCell*molar_constant);
                
    co2 = nist->FindOrBuildMaterial("G4_CARBON_DIOXIDE");
		        
	gasMixOne = new G4Material("he3Gas", densityCellOne,	2, kStateGas, temperatureCell, pressureCellOne);
    
    gasMixOne->AddElement(he3, 99.*perCent);
    gasMixOne->AddMaterial(co2, 1.*perCent);
    
    gasMixTwo = new G4Material("he3Gas", densityCellTwo,	2, kStateGas, temperatureCell, pressureCellTwo);
    
    gasMixTwo->AddElement(he3, 99.*perCent);
    gasMixTwo->AddMaterial(co2, 1.*perCent);

    gasMixThree = new G4Material("he3Gas", densityCellThree,	2, kStateGas, temperatureCell, pressureCellThree);
    
    gasMixThree->AddElement(he3, 99.*perCent);
    gasMixThree->AddMaterial(co2, 1.*perCent);

    gasMixFour = new G4Material("he3Gas", densityCellFour,	2, kStateGas, temperatureCell, pressureCellFour);
    
    gasMixFour->AddElement(he3, 99.*perCent);
    gasMixFour->AddMaterial(co2, 1.*perCent);
	
	//Vaccum	
    G4double    atomicMassAir = 29.*g/mole,
                pressureVac = 9e-9*bar,
                densityVac = (atomicMassAir*pressureVac)/(temperatureCell*molar_constant);
    
    realVac = new G4Material("realVac", densityVac, 1, kStateGas, temperatureCell, pressureVac);
    
    air = nist->FindOrBuildMaterial("G4_AIR");
    
    realVac->AddMaterial(air, 100.*perCent);
    
    //Borated polyethylène (world)
    //modMat = nist->FindOrBuildMaterial("G4_POLYETHYLENE");
    
    bore = nist->FindOrBuildMaterial("G4_B");
    
    //High density polyethylene (moderator)
    //mod = new G4Material("mod", 0.93*g/cm3, 1);
    //mod->AddMaterial(modMat, 100.*perCent);

    G4double densityPoly_TS; 
    G4int ncomponentsPoly_TS, natomsH, natomsC;

    G4Element* H_TS = new G4Element("TS_H_of_Polyethylene", "H", 1., 1.0078*g/mole);
    G4Element* C = new G4Element("Carbon", "C", 6., 12.011*g/mole);

    G4Material* MatPolyethylene_TS = new G4Material("Polyethylene_TS", densityPoly_TS=0.93*g/cm3, ncomponentsPoly_TS=2);

    MatPolyethylene_TS->AddElement(H_TS, natomsH=6);
    MatPolyethylene_TS->AddElement(C, natomsC=2);

    borPol = new G4Material("borPol", 1.005*g/cm3, 2);
    
    borPol->AddMaterial(MatPolyethylene_TS, 95.*perCent);
    borPol->AddMaterial(bore, 5.*perCent);

    
    //Plastic beta detector
    plasticMat = nist->FindOrBuildMaterial("G4_PLASTIC_SC_VINYLTOLUENE");
    
    //Steel cylinder
    steel = nist->FindOrBuildMaterial("G4_STAINLESS-STEEL");
    
    //Plexiglass
    plexi = nist->FindOrBuildMaterial("G4_PLEXIGLASS");
    
//VOLUMES
	
	//Borated polyethylene (world)
    const G4int nsect = 6;
    std::vector<G4TwoVector> polygon(nsect);
    G4double ang = CLHEP::twopi/nsect;
    for (G4int i = 0; i < nsect; ++i)
    {
        G4double rmax = 46.6*cm;
        G4double phi = i*ang+(CLHEP::pi)/6;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        polygon[i].set(rmax*cosphi, rmax*sinphi);
    }
                                                                                                   
    G4TwoVector offsetA(0,0), offsetB(0,0);
    G4double scaleA = 1, scaleB = 1;
    
    solidWorld = new G4ExtrudedSolid("Extruded", polygon, 35.*cm, offsetA, scaleA, offsetB, scaleB);

	logicWorld = new G4LogicalVolume(solidWorld, borPol, "logicWorld");
	
	physWorld = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicWorld, "physWorld", 0, false, 0, true);
	
	//Moderator with center hole and light guide
    std::vector<G4TwoVector> polygonBis(nsect);
    for (G4int i = 0; i < nsect; ++i)
    {
        G4double rmax = 31.6*cm;
        G4double phi = i*ang+(CLHEP::pi)/6;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        polygonBis[i].set(rmax*cosphi, rmax*sinphi);
    }
                                                                                                   
    solidModPreSub = new G4ExtrudedSolid("Extruded", polygonBis, 25.*cm, offsetA, scaleA, offsetB, scaleB);
    
    solidHole = new G4Tubs("solidHole", 0., 67.5*mm, 35.*cm, 0., 360.);
    
    solidLightGuide = new G4Box("solidLightGuide", 2.25*cm, 25.*cm, 5.*cm);
    
    G4ThreeVector yTrans(0., -20.*cm, 0.);

    solidUni = new G4UnionSolid("solidUni", solidHole, solidLightGuide, 0, yTrans);
    
    solidMod = new G4SubtractionSolid("solidMod", solidModPreSub, solidUni);
    
    logicMod = new G4LogicalVolume(solidMod, MatPolyethylene_TS, "logicMod");
    
    physMod = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicMod, "physMod", logicWorld, false, 0, true);

    logicUni = new G4LogicalVolume(solidUni, air, "logicUni");
    
    physUni = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicUni, "physUni", logicWorld, false, 0, true);
    
    //Plastic beta detector
    /*G4ThreeVector zTrans(0., 0., 3.*mm);
    
    plasticOut = new G4Tubs("plasticOut", 0., 25.4*mm, 49.*mm, 0., 360.);
    
    plasticIn = new G4Tubs("plasticIn", 0., 22.4*mm, 49.*mm, 0., 360.);
    
    solidPlastic = new G4SubtractionSolid("solidPlastic", plasticOut, plasticIn, 0, zTrans);
    
    logicPlastic = new G4LogicalVolume(solidPlastic, realVac, "logicPlastic");
    
    physPlastic = new G4PVPlacement(0, G4ThreeVector(0., 0., 34.*mm), logicPlastic, "physPlastic", logicUni, false, 0, true);*/
    
    //Source Point
	solidSP = new G4Sphere("SP", 0., 0.1*mm, 0., 360., 0., 180.);
	
	logicSP = new G4LogicalVolume(solidSP, realVac, "logicSP");
	
	physSP = new G4PVPlacement(0, G4ThreeVector(0., -5.*cm, 10.*cm), logicSP, "physSP", logicUni, false, 0, true);
	
	fSPVolume = logicSP;
	
	//Cell cylinder
	solidCyl = new G4Tubs("CylOut", 15.5*mm, 16.*mm, 250.*mm, 0., 360.);
	
	logicCyl = new G4LogicalVolume(solidCyl, steel, "logicCyl");
	
	//Plexiglass chamber
    G4ThreeVector zTrans(0., 0., -3.*mm);
    
    plexiOut = new G4Tubs("plasticOut", 0., 55.*mm, 200.*mm, 0., 360.);
    
    plexiIn = new G4Tubs("plasticIn", 0., 52.*mm, 200.*mm, 0., 360.);
    
    solidPlexi = new G4SubtractionSolid("solidPlexi", plexiOut, plexiIn, 0, zTrans);
    
    logicPlexi = new G4LogicalVolume(solidPlexi, plexi, "logicPlexi");
    
    physPlexi = new G4PVPlacement(0, G4ThreeVector(0., 0., -15.*cm), logicPlexi, "physPlexi", logicUni, false, 0, true);
    
	//Vaccum chamber
	solidVac = new G4Tubs("solidVac", 0., 52.*mm, 198.5*mm, 0., 360.);
	
	logicVac = new G4LogicalVolume(solidVac, realVac, "logicVac");
	
	physVac = new G4PVPlacement(0, G4ThreeVector(0., 0., -151.5*mm), logicVac, "physVac", logicUni, false, 0, true);
	
	//Helium cells
	solidCell = new G4Tubs("solidCell", 0., 15.5*mm, 250.*mm, 0., 360.);
	
	logicCellOne = new G4LogicalVolume(solidCell, gasMixOne, "logicCellOne");
    logicCellTwo = new G4LogicalVolume(solidCell, gasMixTwo, "logicCellTwo");
    logicCellThree = new G4LogicalVolume(solidCell, gasMixThree, "logicCellThree");
    logicCellFour = new G4LogicalVolume(solidCell, gasMixFour, "logicCellTFour");
    
    fScoringVolumeOne = logicCellOne;
    fScoringVolumeTwo = logicCellTwo;
    fScoringVolumeThree = logicCellThree;
    fScoringVolumeFour = logicCellFour;
    
    //physCell1 = new G4PVPlacement(0, G4ThreeVector(0., 10.*cm, 0.), logicCellOne, "physCell1", logicMod, false, 0, true);
    
    	//Cells physical volume
    G4int nsect1 = 6;
    G4double dphi1 = 360.*deg;
    G4double ang1 = dphi1/nsect1;
    std::vector<G4ThreeVector> hex(nsect1);
    G4double c = 5.;
    
    		//Ring 1
    G4double sphi1 = -30.*deg;
    G4double rmax1 = (2.*c)*cm;
    
    for (G4int i=0; i<nsect1-1; ++i)
    {
        G4double phi = i*ang1 + sphi1;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax1*cosphi,rmax1*sinphi,0.);
        
        physCell1 = new G4PVPlacement(0, hex[i], logicCellOne, "physCell", logicMod, false, nsect1, true);
        physCyl1 = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 1 bis
    G4double sphi1bis = 0.*deg;
    G4double rmax1bis = (sqrt(3.)*c)*cm;
    
    for (G4int i=0; i<nsect1; ++i)
    {
        G4double phi = i*ang1 + sphi1bis;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax1bis*cosphi,rmax1bis*sinphi,0.);
        
        physCell1bis = new G4PVPlacement(0, hex[i], logicCellOne, "physCell", logicMod, false, nsect1, true);
        physCyl1bis = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 2
    G4double sphi2 = sphi1;
    G4double rmax2 = (3.*c)*cm;
    
    for (G4int i=0; i<nsect1-1; ++i)
    {
        G4double phi = i*ang1 + sphi2;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax2*cosphi,rmax2*sinphi,0.);
        
        physCell2 = new G4PVPlacement(0, hex[i], logicCellTwo, "physCell", logicMod, false, nsect1, true);
        physCyl2 = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 2 bis
    G4double sphi2bis = 10.893*deg;
    G4double rmax2bis = (sqrt(7.)*c)*cm;
    
    for (G4int i=0; i<nsect1; ++i)
    {
        G4double phi = i*ang1 + sphi2bis;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax2bis*cosphi,rmax2bis*sinphi,0.);
        
        physCell2bis = new G4PVPlacement(0, hex[i], logicCellTwo, "physCell", logicMod, false, nsect1, true);
        physCyl2bis = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 2 bis bis
    G4double sphi2bisbis = -10.893*deg;
    G4double rmax2bisbis = (sqrt(7.)*c)*cm;
    
    for (G4int i=0; i<nsect1; ++i)
    {
        G4double phi = i*ang1 + sphi2bisbis;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax2bisbis*cosphi,rmax2bisbis*sinphi,0.);
        
        physCell2bisbis = new G4PVPlacement(0, hex[i], logicCellTwo, "physCell", logicMod, false, nsect1, true);
        physCyl2bisbis = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 3
    G4double sphi3 = sphi1;
    G4double rmax3 = (4.*c)*cm;
    
    for (G4int i=0; i<nsect1-1; ++i)
    {
        G4double phi = i*ang1 + sphi3;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax3*cosphi,rmax3*sinphi,0.);
        
        physCell3 = new G4PVPlacement(0, hex[i], logicCellThree, "physCell", logicMod, false, nsect1, true);
        physCyl3 = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 3 bis
    G4double sphi3bis = 0.*deg;
    G4double rmax3bis = (2.*sqrt(3.)*c)*cm;
    
    for (G4int i=0; i<nsect1; ++i)
    {
        G4double phi = i*ang1 + sphi3bis;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax3bis*cosphi,rmax3bis*sinphi,0.);
        
        physCell3bis = new G4PVPlacement(0, hex[i], logicCellThree, "physCell", logicMod, false, nsect1, true);
        physCyl3bis = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 3 bis bis
    G4double sphi3bisbis = 16.102*deg;
    G4double rmax3bisbis = (sqrt(13.)*c)*cm;
    
    for (G4int i=0; i<nsect1; ++i)
    {
        G4double phi = i*ang1 + sphi3bisbis;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax3bisbis*cosphi,rmax3bisbis*sinphi,0.);
        
        physCell3bisbis = new G4PVPlacement(0, hex[i], logicCellThree, "physCell", logicMod, false, nsect1, true);
        physCyl3bisbis = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 3 bis bis bis
    G4double sphi3bisbisbis = -16.102*deg;
    G4double rmax3bisbisbis = (sqrt(13.)*c)*cm;
    
    for (G4int i=0; i<nsect1; ++i)
    {
        G4double phi = i*ang1 + sphi3bisbisbis;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax3bisbisbis*cosphi,rmax3bisbisbis*sinphi,0.);
        
        physCell3bisbisbis = new G4PVPlacement(0, hex[i], logicCellThree, "physCell", logicMod, false, nsect1, true);
        physCyl3bisbisbis = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 4
    G4double sphi4 = sphi1;
    G4double rmax4 = (5.*c)*cm;
    
    for (G4int i=0; i<nsect1-1; ++i)
    {
        G4double phi = i*ang1 + sphi4;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax4*cosphi,rmax4*sinphi,0.);
        
        physCell4 = new G4PVPlacement(0, hex[i], logicCellFour, "physCell", logicMod, false, nsect1, true);
        physCyl4 = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 4 bis
    G4double sphi4bis = 6.587*deg;
    G4double rmax4bis = (sqrt(19.)*c)*cm;
    
    for (G4int i=0; i<nsect1; ++i)
    {
        G4double phi = i*ang1 + sphi4bis;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax4bis*cosphi,rmax4bis*sinphi,0.);
        
        physCell4bis = new G4PVPlacement(0, hex[i], logicCellFour, "physCell", logicMod, false, nsect1, true);
        physCyl4bis = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 4 bis bis
    G4double sphi4bisbis = 19.107*deg;
    G4double rmax4bisbis = (sqrt(21.)*c)*cm;
    
    for (G4int i=0; i<nsect1; ++i)
    {
        G4double phi = i*ang1 + sphi4bisbis;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax4bisbis*cosphi,rmax4bisbis*sinphi,0.);
        
        physCell4bisbis = new G4PVPlacement(0, hex[i], logicCellFour, "physCell", logicMod, false, nsect1, true);
        physCyl4bisbis = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 4 bis bis bis
    G4double sphi4bisbisbis = -19.107*deg;
    G4double rmax4bisbisbis = (sqrt(21.)*c)*cm;
    
    for (G4int i=0; i<nsect1; ++i)
    {
        G4double phi = i*ang1 + sphi4bisbisbis;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax4bisbisbis*cosphi,rmax4bisbisbis*sinphi,0.);
        
        physCell4bisbisbis = new G4PVPlacement(0, hex[i], logicCellFour, "physCell", logicMod, false, nsect1, true);
        physCyl4bisbisbis = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
    		//Ring 4 bis bis bis bis
    G4double sphi4bisbisbisbis = -6.587*deg;
    G4double rmax4bisbisbisbis = (sqrt(19.)*c)*cm;
    
    for (G4int i=0; i<nsect1; ++i)
    {
        G4double phi = i*ang1 + sphi4bisbisbisbis;
        G4double cosphi = std::cos(phi);
        G4double sinphi = std::sin(phi);
        hex[i].set(rmax4bisbisbisbis*cosphi,rmax4bisbisbisbis*sinphi,0.);
        
        physCell4bisbisbisbis = new G4PVPlacement(0, hex[i], logicCellFour, "physCell", logicMod, false, nsect1, true);
        physCyl4bisbisbisbis = new G4PVPlacement(0, hex[i], logicCyl, "physCyl", logicMod, false, nsect1, true);
    }
    
            //Mono Cell for tests
    /*monoCell = new G4PVPlacement(0, G4ThreeVector(0., (2.*c)*cm, 0.), logicCellOne, "physCell", logicMod, false, 0, true);
    monoCyl = new G4PVPlacement(0, G4ThreeVector(0., (2.*c)*cm, 0.), logicCyl, "physCyl", logicMod, false, 0, true);*/
    
	return physWorld;
}
