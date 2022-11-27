cd merge 
cc merge.c
valgrind --tool=cachegrind --cachegrind-out-file=merge_0 ./a.out 250000 
valgrind --tool=cachegrind --cachegrind-out-file=merge_1 ./a.out 500000 
valgrind --tool=cachegrind --cachegrind-out-file=merge_2 ./a.out 750000 
valgrind --tool=cachegrind --cachegrind-out-file=merge_3 ./a.out 1000000 

cd .. 
cd quick 
cc quick.c
valgrind --tool=cachegrind --cachegrind-out-file=quick_0 ./a.out 250000 
valgrind --tool=cachegrind --cachegrind-out-file=quick_1 ./a.out 500000 
valgrind --tool=cachegrind --cachegrind-out-file=quick_2 ./a.out 750000 
valgrind --tool=cachegrind --cachegrind-out-file=quick_3 ./a.out 1000000  

cd .. 
cd radix
cc radix.c
valgrind --tool=cachegrind --cachegrind-out-file=radix_0 ./a.out 250000 
valgrind --tool=cachegrind --cachegrind-out-file=radix_1 ./a.out 500000 
valgrind --tool=cachegrind --cachegrind-out-file=radix_2 ./a.out 750000 
valgrind --tool=cachegrind --cachegrind-out-file=radix_3 ./a.out 1000000  

cd ..
