/**
 * Title: CS6600, Computer Architecture, Jul-Nov 2022, Assignment-1
 * Author: Sai Gautham Ravipati (EE19B053) 
 * Description: Selection sort ALgorithm
 * Compiling: cc selection.c 
 * Usage: ./a.out N, N is the size of random test vector to sort 
 **/

#include <stdio.h> 
#include <stdlib.h>

// Function to perform selection sort 

void selection(int data[], int N) {
    for(int i = 0; i < N - 1; i++) {
        int id_min = i; 
        for(int j = i + 1; j < N; j++) {
            if(data[id_min] > data[j]) {
                id_min = j;
            } 
        }
        if(id_min != i) {
            int temp_data = data[i]; 
            data[i] = data[id_min]; 
            data[id_min] = temp_data; 
        }
    }
}

// The main function populates the test vector, 
// calls the sort function, finally checks the 
// correctness of sorted array. 

int main(int argc, char *argv[]){

    int N = atoi(argv[1]);        // Taking the size of test-vector from command line

    // Allocating memory and populating the test sequence

    int *data; 
    data = (int*) malloc(N * sizeof(int)); 

    srand(0);      // Needed to generate same numbers on mutliple runs 
    
    for(int i = 0; i < N; i++) {
        data[i] = rand(); 
        // printf("%d ", data[i]); 
    }

    // Sort function to perfrom the selection sort 

    selection(data, N);


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
