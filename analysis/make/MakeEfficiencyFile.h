#ifndef MakeEfficiencyFile_h
#define MakeEfficiencyFile_h

#include <vector>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <Riostream.h>

#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TGraph.h"
#include "TROOT.h"
#include "TDirectory.h"
#include "TVector3.h"

class MakeEfficiencyFile{
    
public: 
    TFile *dataFile;
    TTree *dataTree;
    
    double ringnumber;
    
    double Ntot;
    double Nr1;
    double Nr2;
    double Nr3;
    double Nr4;
    
    std::vector<float> Nvec {0,0,0,0,0};
    
public:
    MakeEfficiencyFile(const char*);
    virtual ~MakeEfficiencyFile();
    
    std::vector<float> FindN(const char* inputFile);
    virtual void StoreN();
    
};

#endif
