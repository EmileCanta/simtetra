for i in {0..101}
do
	root -l -b -q "MakeRatioFile.C+(\"/vol0/simtetra/analysis/output$i.root\")"
done
