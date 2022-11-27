/**
 * Title: CS6600, Computer Architecture, Jul-Nov 2022, Assignment-1
 * Author: Sai Gautham Ravipati (EE19B053) 
 * Description: Quick sort ALgorithm
 * Compiling: cc quick.c 
 * Usage: ./a.out N, N is the size of random test vector to sort 
 **/ 

#include <stdio.h> 
#include <stdlib.h>

// Partition function used in quick sort 

int partition(int data[], int s, int e) {
    int pivot = data[e]; 
    int id = s - 1;
    int temp_data; 

    for(int i = s; i <= e - 1; i++) { 
        if(data[i] < pivot) { 
            id++; 
            temp_data = data[i]; 
            data[i] = data[id]; 
            data[id] = temp_data; 
        }
    } 

    id++; 
    temp_data = data[id]; 
    data[id] = data[e]; 
    data[e] = temp_data; 

    return id;
}

// Function to perform quick sort 

void quick(int data[], int s, int e) {
    if(s < e) { 
        int p = partition(data, s, e);
        quick(data, s, p - 1); 
        quick(data, p + 1, e); 
    }
}

// The main function populates the test vector, 
// calls the sort function, finally checks the 
// correctness of sorted array. 

int main(int argc, char *argv[]) {

    int N = atoi(argv[1]);        // Taking the size of test-vector from command line

    // Allocating memory and populating the test sequence

    int *data; 
    data = (int*) malloc(N * sizeof(int)); 

    srand(0);      // Needed to generate same numbers on mutliple runs  
    
    for(int i = 0; i < N; i++) {
        data[i] = rand(); 
        // printf("%d ", data[i]); 
    }

    // Sort function to perfrom the quick sort 

    quick(data, 0, N - 1); 

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
    
    free(data);

}
