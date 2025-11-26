/* Reversing an array using pointers */

#include <stdio.h>

void reverseArray(int *arr, int size) {
    /* TODO: reverse the array arr using pointers */
    int *right_arr = arr + size -1;
    int temp;
    while (right_arr > arr) {
        temp = *arr;
        *arr = *right_arr;
        *right_arr = temp;
        right_arr--;
        arr++;
    }
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i=0; i< n; i++) {
        scanf("%d", arr+i);
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, n);    

    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
