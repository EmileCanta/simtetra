#include "MakeEfficiencyFile.h"

MakeEfficiencyFile::MakeEfficiencyFile(const char* inputFile)
{	
	Ntot = 0;
	Nr1 = 0;
	Nr2 = 0;
	Nr3 = 0;
	Nr4 = 0;
	
    gROOT->ProcessLine("#include <vector>");
    
    FindN(inputFile);
    
    StoreN();
}

MakeEfficiencyFile::~MakeEfficiencyFile()
{}
    

std::vector<float> MakeEfficiencyFile::FindN(const char* inputFile)
{
    dataFile = TFile::Open(inputFile);
    
    dataTree = (TTree*)dataFile->Get("Rings");
    
    dataTree->SetBranchAddress("RingN", &ringnumber);
    
    int fEntries = dataTree->GetEntries();
    
    for(int i = 0; i < fEntries; i++)
    {
        dataTree->GetEntry(i);
        
        Ntot++;
        
        if(ringnumber == 1.)
        {
            Nr1++;
        }
        if(ringnumber == 2.)
        {
            Nr2++;
        }
        if(ringnumber == 3.)
        {
            Nr3++;
        }
        if(ringnumber == 4.)
        {
            Nr4++;
        }
    }
    
    Nvec[0] = Ntot;
    Nvec[1] = Nr1;
    Nvec[2] = Nr2;
    Nvec[3] = Nr3;
    Nvec[4] = Nr4;
    
    return Nvec;
}

void MakeEfficiencyFile::StoreN()
{
	fstream outputFile1;
	fstream outputFile2;
	fstream outputFile3;
	fstream outputFile4;
	fstream outputFile5;
	
	outputFile1.open("../NtotFile.dat", ios::app);
	outputFile2.open("../Nr1File.dat", ios::app);
	outputFile3.open("../Nr2File.dat", ios::app);
	outputFile4.open("../Nr3File.dat", ios::app);
	outputFile5.open("../Nr4File.dat", ios::app);

	outputFile1 << Nvec[0] << endl;
	outputFile1.close();
	outputFile2 << Nvec[1] << endl;
	outputFile2.close();
	outputFile3 << Nvec[2] << endl;
	outputFile3.close();
	outputFile4 << Nvec[3] << endl;
	outputFile4.close();
	outputFile5 << Nvec[4] << endl;
	outputFile5.close();
	
}
