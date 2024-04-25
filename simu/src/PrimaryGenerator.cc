#include "PrimaryGenerator.hh"

MyPrimaryGenerator::MyPrimaryGenerator()
{   
    fParticleGun  = new G4ParticleGun(1);
    
    //Neutron source
    
    G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
    G4ParticleDefinition *particle = particleTable->FindParticle("geantino");
    fParticleGun->SetParticleDefinition(particle);
    
    fParticleGun->SetParticlePosition(G4ThreeVector(0., 0., 0.));    
    fParticleGun->SetParticleEnergy(0.*MeV);
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0., 0., 0.));
}

MyPrimaryGenerator::~MyPrimaryGenerator()
{
	delete fParticleGun;
}

void MyPrimaryGenerator::GeneratePrimaries(G4Event *anEvent)
{
    G4double cosTheta = 2*G4UniformRand() - 1.;
    G4double sinTheta = std::sqrt(1. - cosTheta*cosTheta);
    G4double phi = CLHEP::twopi*G4UniformRand();
    G4double vx = sinTheta*std::cos(phi),
    vy = sinTheta*std::sin(phi),
    vz = cosTheta;
    
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(vx,vy,vz));
    	

    fParticleGun->GeneratePrimaryVertex(anEvent);
}
