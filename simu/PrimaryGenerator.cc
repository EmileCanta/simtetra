#include "PrimaryGenerator.hh"

MyPrimaryGenerator::MyPrimaryGenerator()
{   
    fParticleGun  = new G4ParticleGun(1);
    
    //Neutron source
    
    /*G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
    G4ParticleDefinition *particle = particleTable->FindParticle("neutron");
    fParticleGun->SetParticleDefinition(particle);*/
    
    fParticleGun->SetParticlePosition(G4ThreeVector(0., -5.*cm, 10.*cm));    
    fParticleGun->SetParticleEnergy(1.*MeV);
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0., 0., 0.));
}

MyPrimaryGenerator::~MyPrimaryGenerator()
{
	delete fParticleGun;
}

void MyPrimaryGenerator::GeneratePrimaries(G4Event *anEvent)
{
    /*G4double cosTheta = 2*G4UniformRand() - 1.;
    G4double sinTheta = std::sqrt(1. - cosTheta*cosTheta);
    G4double phi = CLHEP::twopi*G4UniformRand();
    G4double vx = sinTheta*std::cos(phi),
    vy = sinTheta*std::sin(phi),
    vz = cosTheta;
    
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(vx,vy,vz));*/
    	
    //Cf 252 source

    if(fParticleGun->GetParticleDefinition() == G4Geantino::Geantino()) 
    {
        G4int Z = 98, A = 252;
        G4double ionCharge   = 0.*eplus;
        G4double excitEnergy = 0.*keV;

        G4ParticleDefinition* ion = G4IonTable::GetIonTable()->GetIon(Z,A,excitEnergy);
        fParticleGun->SetParticleDefinition(ion);
        fParticleGun->SetParticleCharge(ionCharge);
    }

    fParticleGun->GeneratePrimaryVertex(anEvent);
}
