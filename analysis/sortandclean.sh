for num in {0..49}
do
	hadd ../runs/output$num.root ../runs/output${num}_t{0..7}.root
done

for num in {0..49}
do
	rm ../runs/output${num}_t{0..7}.root
done
