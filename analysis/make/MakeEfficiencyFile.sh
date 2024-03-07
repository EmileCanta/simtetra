for i in {0..49}
do
	root -l -b -q "MakeEfficiencyFile.C+(\"../../runs/output$i.root\")"
done
