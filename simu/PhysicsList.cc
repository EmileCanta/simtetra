#include "PhysicsList.hh"
#include "NeutronHPphysics.hh"

#include "G4BosonConstructor.hh"
#include "G4LeptonConstructor.hh"
#include "G4MesonConstructor.hh"
#include "G4BosonConstructor.hh"
#include "G4BaryonConstructor.hh"
#include "G4IonConstructor.hh"
#include "G4ShortLivedConstructor.hh"

#include "G4SystemOfUnits.hh"
#include "G4UnitsTable.hh"

MyPhysicsList::MyPhysicsList()
{	
    SetVerboseLevel(1);

    
    /*RegisterPhysics(new G4DecayPhysics());
    RegisterPhysics(new G4RadioactiveDecayPhysics());
	RegisterPhysics(new G4HadronElasticPhysicsHP());
    RegisterPhysics(new G4HadronPhysicsQGSP_BIC_HP());

    RegisterPhysics(new GammaNuclearPhysics("gamma"));
    RegisterPhysics(new G4IonElasticPhysics());
    RegisterPhysics(new G4IonPhysicsXS());*/

    RegisterPhysics(new G4EmPenelopePhysics());
    RegisterPhysics( new NeutronHPphysics("neutronHP"));

}

void MyPhysicsList::ConstructParticle()
{
    G4BosonConstructor  pBosonConstructor;
    pBosonConstructor.ConstructParticle();

    G4LeptonConstructor pLeptonConstructor;
    pLeptonConstructor.ConstructParticle();

    G4MesonConstructor pMesonConstructor;
    pMesonConstructor.ConstructParticle();

    G4BaryonConstructor pBaryonConstructor;
    pBaryonConstructor.ConstructParticle();

    G4IonConstructor pIonConstructor;
    pIonConstructor.ConstructParticle();

    G4ShortLivedConstructor pShortLivedConstructor;
    pShortLivedConstructor.ConstructParticle();  
}

MyPhysicsList::~MyPhysicsList()
{}


