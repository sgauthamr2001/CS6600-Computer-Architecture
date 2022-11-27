cc quick.c
valgrind --tool=cachegrind --D1=32768,8,64  --cachegrind-out-file=config_0 ./a.out 1000000
valgrind --tool=cachegrind --D1=32768,8,128 --cachegrind-out-file=config_1 ./a.out 1000000 
valgrind --tool=cachegrind --D1=32768,8,32  --cachegrind-out-file=config_2 ./a.out 1000000 
valgrind --tool=cachegrind --D1=32768,4,64  --cachegrind-out-file=config_3 ./a.out 1000000 
valgrind --tool=cachegrind --D1=32768,16,64 --cachegrind-out-file=config_4 ./a.out 1000000
valgrind --tool=cachegrind --D1=16384,8,64  --cachegrind-out-file=config_5 ./a.out 1000000
valgrind --tool=cachegrind --D1=16384,4,128 --cachegrind-out-file=config_6 ./a.out 1000000


