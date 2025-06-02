#include <iostream>  
using namespace std;  
  
void find_min(int* arr, int start, int end) {  
    if (start >= end) {  
        return;  
    }  
    int min_index = start;  
    for (int i = start + 1; i < end; ++i) {  
        if (arr[i] < arr[min_index]) {  
            min_index = i;  
        }  
    }  
    // Swap the found minimum element with the start element  
    int temp = arr[start];  
    arr[start] = arr[min_index];  
    arr[min_index] = temp;  
    // Recursively sort the remaining elements  
    find_min(arr, start + 1, end);  
}  
  
int main() {  
    int arr[] = {10, 34, 5, 6, 3};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    find_min(arr, 0, size);  
    for (int i = 0; i < size; ++i) {  
        cout << arr[i] << " ";  
    }  
    return 0;  
}