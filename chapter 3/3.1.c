#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bin_search1(int x, int arr[], int n) {
    int low =0, mid = 0;
    int high = n - 1;
    
    
    while (low <= high) {
        mid = low + (high - low) / 2; 
        
        if (x < arr[mid]) high = mid - 1;
        else if (x > arr[mid]) low = mid + 1;
        else return mid;
    }
    
    return -1;
        

}


int bin_search2(int x, int arr[], int n) {
    int low =0, mid = 0;
    int high = n - 1;
    
    
    while (low < high) {
        mid = low + (high - low) / 2; 
        
        if (x > arr[mid]) low = mid + 1; 
        else high = mid; 
        
    }
    
    if (arr[low] == x) return low;
    
    return -1;
        

}

int main() {
    
    int *searchArr = (int*)malloc(sizeof(int) * 32000);
    int *randValues = (int*)malloc(sizeof(int) * 32000);
    
    for (int i = 0; i < 32000; i++) {
        searchArr[i] = i;
        randValues[i] = rand();
    }
    
    clock_t start1 = clock();
    for (int i = 0; i < 300; i++) {
        for (int i = 0; i < 32000; i++) {
            bin_search1(randValues[i], searchArr, 32000);
        }
    }
    clock_t end1 = clock();
    double time_spent1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
    printf("Time 1 is %.2f", time_spent1);
    
    clock_t start2 = clock();
    for (int i = 0; i < 300; i++) {
        for (int i = 0; i < 32000; i++) {
            bin_search2(randValues[i], searchArr, 32000);
        }
    }
    clock_t end2 = clock();
    double time_spent2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
    printf("Time 2 is %.2f", time_spent2);
    
    free(searchArr);
    free(randValues);
    
    return 0;
}
