#include <stdio.h>

void selection_sort(int *arr, int len){
    for(int i = 0; i < len; ++i){
        int min = arr[i], min_idx = i;
        for(int j = i+1; j < len; ++j){
            if(arr[j] < min){
                min = arr[j];
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main(){
    int unsorted_arr[7] = {5, 3, 8, 4, 6, 9, 11};

    for(int i = 0; i < 7; ++i){
        printf("%d, ", unsorted_arr[i]);
    }
    printf("\n");

    selection_sort(unsorted_arr, 7);

    for(int i = 0; i < 7; ++i){
        printf("%d, ", unsorted_arr[i]);
    }
    printf("\n");

    return 0;
}