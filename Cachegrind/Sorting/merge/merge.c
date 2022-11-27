/**
 * Title: CS6600, Computer Architecture, Jul-Nov 2022, Assignment-1
 * Author: Sai Gautham Ravipati (EE19B053) 
 * Description: Merge sort ALgorithm
 * Compiling: cc merge.c 
 * Usage: ./a.out N, N is the size of random test vector to sort 
 **/

#include <stdio.h> 
#include <stdlib.h>

// Function to merge the two sub-arrays

void merge_arr(int data[], int s, int m, int e) {
    int *data1;
    int *data2;  
    data1 = (int*) malloc((m - s + 1) * sizeof(int)); 
    data2 = (int*) malloc((e - m) * sizeof(int)); 

    for(int i = s; i <= m; i++)
        data1[i - s] = data[i]; 
    for(int j = m + 1; j <= e; j++)
        data2[j - m - 1] = data[j]; 

    int i = 0; 
    int j = 0; 
    int k = s;

    while(i < (m - s + 1) && j < (e - m)) 
        data[k++] = (data1[i] < data2[j]) ? data1[i++] : data2[j++]; 
    
    while(i < (m - s + 1))
        data[k++] = data1[i++];

    while(j < (e - m))
        data[k++] = data2[j++];

    free(data1); 
    free(data2); 
}

// Function to perform selection sort 

void merge(int data[], int s, int e) {
    if(s < e) {
        int m = (s + e) / 2; 
        merge(data, s, m); 
        merge(data, m + 1, e); 
        merge_arr(data, s, m, e); 
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

    // Sort function to perform the merge sort 

    merge(data, 0, N - 1); 

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
