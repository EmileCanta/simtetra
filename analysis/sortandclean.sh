for num in {0..49}
do
	hadd ../../data/simtetra/output$num.root ../../data/simtetra/output${num}_t{0..7}.root
done

for num in {0..49}
do
	rm ../../data/simtetra/output${num}_t{0..7}.root
done
