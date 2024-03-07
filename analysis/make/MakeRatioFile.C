#include "MakeRatioFile.h"

MakeRatioFile::MakeRatioFile(const char* inputFile)
{	
    gROOT->ProcessLine("#include <vector>");
    
    ComputeRatios(inputFile);
    
    StoreRatios();
    
    r1 = 0.;
    r2 = 0.;
    r3 = 0.;
    r4 = 0.;
}

MakeRatioFile::~MakeRatioFile()
{}
    

std::vector<float> MakeRatioFile::ComputeRatios(const char* inputFile)
{
    dataFile = TFile::Open(inputFile);
    
    dataTree = (TTree*)dataFile->Get("Rings");
    
    dataTree->SetBranchAddress("RingN", &ringnumber);
    
    int fEntries = dataTree->GetEntries();
    
    for(int i = 0; i < fEntries; i++)
    {
        dataTree->GetEntry(i);
        
        if(ringnumber == 1.)
        {
            r1++;
        }
        if(ringnumber == 2.)
        {
            r2++;
        }
        if(ringnumber == 3.)
        {
            r3++;
        }
        if(ringnumber == 4.)
        {
            r4++;
        }
    }
    
    ratiosVec[0] = r2/r1;
    ratiosVec[1] = r3/r1;
    ratiosVec[2] = r4/r1;
    ratiosVec[3] = r3/r2;
    ratiosVec[4] = r4/r2;
    ratiosVec[5] = r4/r3;
    
    return ratiosVec;
}

void MakeRatioFile::StoreRatios()
{
	fstream outputFile1;
	fstream outputFile2;
	fstream outputFile3;
	fstream outputFile4;
	fstream outputFile5;
	fstream outputFile6;
	
	outputFile1.open("/vol0/simtetra/analysis/Ratio1File.dat", ios::app);
	outputFile2.open("/vol0/simtetra/analysis/Ratio2File.dat", ios::app);
	outputFile3.open("/vol0/simtetra/analysis/Ratio3File.dat", ios::app);
	outputFile4.open("/vol0/simtetra/analysis/Ratio4File.dat", ios::app);
	outputFile5.open("/vol0/simtetra/analysis/Ratio5File.dat", ios::app);
	outputFile6.open("/vol0/simtetra/analysis/Ratio6File.dat", ios::app);

	outputFile1 << ratiosVec[0] << endl;
	outputFile1.close();
	outputFile2 << ratiosVec[1] << endl;
	outputFile2.close();
	outputFile3 << ratiosVec[2] << endl;
	outputFile3.close();
	outputFile4 << ratiosVec[3] << endl;
	outputFile4.close();
	outputFile5 << ratiosVec[4] << endl;
	outputFile5.close();
	outputFile6 << ratiosVec[5] << endl;
	outputFile6.close();
	
}
