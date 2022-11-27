/**
 * Title: CS6600, Computer Architecture, Jul-Nov 2022, Assignment-1
 * Author: Sai Gautham Ravipati (EE19B053) 
 * Description: Radix sort ALgorithm
 * Compiling: cc radix.c 
 * Usage: ./a.out N, N is the size of random test vector to sort 
 **/

#include <stdio.h> 
#include <stdlib.h>

// Function to perform radix sort 

void radix(int data[], int N) {   
    int max = data[0]; 
	int *out;
    out = (int*) malloc(N * sizeof(int));
    
    for(int i = 1; i < N; i++)
        if(data[i] > max)  max = data[i];

    for(int ep = 1; (max / ep) > 0; ep *= 10) {
         
        int count[10] =  {};

        for(int i = 0; i < N; i++)
            count[(data[i] / ep) % 10]++; 
    
        for(int i = 1; i < 10; i++)
            count[i] += count[i - 1]; 

        for(int i = N - 1; i >= 0; i--) { 
            out[count[(data[i] / ep) % 10] - 1] = data[i]; 
            count[(data[i] / ep) % 10]--; 
        }

        for(int i = 0; i < N; i++)
            data[i] = out[i]; 
    }
    
    free(out); 
}

// The main function populates the test vector, 
// calls the sort function, finally checks the 
// correctness of sorted array. 

int main(int argc, char *argv[]) {

    int N = atoi(argv[1]);        // Taking the size of test-vector from command line

    // Allocating memory and populating the test sequence


    int *data; 
    data = (int*) malloc(N * sizeof(int)); 

    srand(0); 
    
    for(int i = 0; i < N; i++) {
        data[i] = rand(); 
        // printf("%d ", data[i]); 
    }

    radix(data, N); 

    int status = 1; 
    // printf("\n%d ", data[0]);
    for(int i = 0; i < N - 1; i++) {
        // printf("%d ", data[i + 1]);
        if(data[i] > data[i + 1]) {
            status = 0; 
        }
    }

    if(!status)
        printf("Failed to sort!\n");
    else
        printf("Sorted!\n");
    
    free(data);

}
