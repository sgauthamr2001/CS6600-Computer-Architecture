## Cachegrind simulator 

### Setting-up the simulator 
  - The simulator could be installed using the guidelined provided at,  [Valgrind simulator](https://installati.one/ubuntu/20.04/valgrind/).
  - The following resource can be referred to understand the Cachegrind simulator,  [Reference Manual](https://valgrind.org/docs/manual/cg-manual).

### Repository Info. 
  - <p align="justify"> run_fast.sh (fast algorithms) runs the code for base case configuration for sizes 250K, 500K, 750K, 1000K, output is stored as folder_name_i. </p>
  -  <p align="justify">  For running the cache-grind for bubble and selection sort for 250K, bash script is provided inside the sub-folders. </p>
  -  <p align="justify">   To run the experiments for different cache configurations, config.sh script is provided in each repository, output is stored as config_i. </p>
  - In radix, radix_20.c corresponds to the code for radix sort with parameter 20. 
  - folder_name_cache includes the terminal output when cachegrind was run on the executables.
  - folder_name_perf includes the terminal output when perf was run on the executables. 
  - cache_config includes the terminal output when cache design parameters were varied. 

### References: 
  - Prof. Rupesh's course on Data Structures, http://www.cse.iitm.ac.in/~rupesh/teaching/pds/aug21/
  - Sorting Algorithms, https://www.geeksforgeeks.org/sorting-algorithms/
