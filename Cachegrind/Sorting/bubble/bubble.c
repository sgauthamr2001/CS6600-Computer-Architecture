/**
 * Title: CS6600, Computer Architecture, Jul-Nov 2022, Assignment-1
 * Author: Sai Gautham Ravipati (EE19B053) 
 * Description: Bubble sort ALgorithm
 * Compiling: cc bubble.c 
 * Usage: ./a.out N, N is the size of random test vector to sort 
 **/

#include <stdio.h> 
#include <stdlib.h>

// Function to perform selection sort

void bubble(int data[], int N) { 
    for(int i = 0; i < N - 1; i++) {
        for(int j = 0; j < N - i - 1; j++) {
            if(data[j] > data[j + 1]) {
                int data_temp = data[j + 1];
                data[j + 1] = data[j]; 
                data[j] = data_temp; 
            } 
        }
    }
}

int main(int argc, char *argv[]){

    int N = atoi(argv[1]);        // Taking the size of test-vector from command line

    // Allocating memory and populating the test sequence

    int *data; 
    data = (int*) malloc(N * sizeof(int)); 

    srand(0);           // Needed to generate same numbers on mutliple runs 
    
    for(int i = 0; i < N; i++) {
        data[i] = rand(); 
        // printf("%d ", data[i]); 
    }

    // Sort function to perfrom the bubble sort 
    bubble(data, N); 

    // Checking the correctness of the algorithm 

    int status = 1; 
    // printf("\n%d ", data[0]);
    for(int i = 0; i < N - 1; i++) {
        // printf("%d ", data[i+1]);
        if(data[i] > data[i+1]) {
            status = 0; 
        }
    }

    if(!status)
        printf("Failed to sort!\n");
    else
        printf("Sorted!\n");

}
