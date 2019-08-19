//*********************************************
//  This is auto generated by G4gen 0.6
//                                  author:Qian

#ifndef MyGunAction_h
#define MyGunAction_h 1

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "G4GeneralParticleSource.hh"
#include "globals.hh"
#include "MyGunMessenger.hh"

class G4ParticleGun;
class G4GeneralParticleSource;

class MyGunAction : public G4VUserPrimaryGeneratorAction
{
public:
  static MyGunAction *GetInstance()
  {
    if (MyGunAction::fInstance == NULL)
      MyGunAction::fInstance = new MyGunAction();
    return MyGunAction::fInstance;
  }

  MyGunAction();
  virtual ~MyGunAction();

  virtual void GeneratePrimaries(G4Event *);

  double GetGunEnergy() { return gunEng; }
  double GetGunX() { return theparax; }
  double GetGunY() { return theparay; }
  double GetGunZ() { return theparaz; }
  double GetGunVx() { return gunDirection[0]; }
  double GetGunVy() { return gunDirection[1]; }
  double GetGunVz() { return gunDirection[2]; }
  double GetGunPx() { return gunPolarization[0]; }
  double GetGunPy() { return gunPolarization[1]; }
  double GetGunPz() { return gunPolarization[2]; }
  double GetdonPDGID() { return donPDGID; }
  MyGunMessenger *fGunMessenger;

  void SetRootFileName(G4String fileName) { fRootFileName = fileName; };
  void SetTxtFileName(G4String fileName) { fTxtFileName = fileName; };
  void SetProgFileName(G4String fileName) { fProgFileName = fileName; };

  G4String GetRootFileName() { return fRootFileName; }
  G4String GetTxtFileName() { return fTxtFileName; }
  G4String GetProgressFileName() { return fProgFileName; }

  void SetGunEnergy(G4double eng) { gunEng = eng; }
  void SetGunPosition(G4ThreeVector pos) { gunPos = pos; }
  void SetGunDirection(G4ThreeVector dir) { gunDirection = dir; }
  void SetGunPolarization(G4ThreeVector pol) { gunPolarization = pol; }
  void SetParticle();
  G4double theparax = 0;
  G4double theparay = 0;
  G4double theparaz = 0;
  G4double momenDirecX = 0;
  G4double momenDirecY = 0;
  G4double momenDirecZ = 0;
  G4double donPDGID = 0;

private:
  G4String fRootFileName;
  G4String fTxtFileName;
  G4String fProgFileName;

  G4ParticleGun *fParticleGun;
  G4double gunEng;
  G4ThreeVector gunPos;
  G4ThreeVector gunDirection;
  G4ThreeVector gunPolarization;

  G4String fRootFile;
  G4String fTxtFile;
  G4String fProgFile;

  static MyGunAction *fInstance;

	G4GeneralParticleSource* fParticleSourceGun;
	bool fPGorGPS;
};

#endif
