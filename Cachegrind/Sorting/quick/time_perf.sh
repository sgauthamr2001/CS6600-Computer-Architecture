cc quick.c
time ./a.out 250000
perf stat ./a.out 250000
time ./a.out 500000
perf stat ./a.out 500000
time ./a.out 750000
perf stat ./a.out 750000
time ./a.out 1000000
perf stat ./a.out 1000000
