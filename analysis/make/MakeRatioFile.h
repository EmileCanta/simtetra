#ifndef MakeRatioFile_h
#define MakeRatioFile_h

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

class MakeRatioFile{
    
public: 
    TFile *dataFile;
    TTree *dataTree;
    
    double ringnumber;
    
    double r1;
    double r2;
    double r3;
    double r4;
    
    std::vector<float> ratiosVec {0,0,0,0,0,0};
    
public:
    MakeRatioFile(const char*);
    virtual ~MakeRatioFile();
    
    std::vector<float> ComputeRatios(const char* inputFile);
    virtual void StoreRatios();
    
};

#endif
