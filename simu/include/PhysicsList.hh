#ifndef PhysicsList_h
#define PhysicsList_h

#include "G4VModularPhysicsList.hh"

#include "G4EmPenelopePhysics.hh"
#include "G4HadronElasticPhysicsHP.hh"
#include "G4HadronPhysicsQGSP_BIC_HP.hh"
#include "G4DecayPhysics.hh"
#include "G4RadioactiveDecayPhysics.hh"

#include "G4IonElasticPhysics.hh"
#include "G4IonPhysicsXS.hh"
#include "GammaNuclearPhysics.hh"
#include "globals.hh"

class MyPhysicsList : public G4VModularPhysicsList
{
public:
	MyPhysicsList();
	~MyPhysicsList() override = default;

public:
	void ConstructParticle() override;
};

#endif
