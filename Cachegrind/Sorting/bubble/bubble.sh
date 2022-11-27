cc bubble.c
valgrind --tool=cachegrind --cachegrind-out-file=bubble_0 ./a.out 250000
perf stat -ddd ./a.out 250000
time ./a.out 250000
