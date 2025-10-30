#include <stdio.h>

void merge_sort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void merge_sort(int arr[], int left, int right) {
    /* TODO: Implement merge sort by using divide and conquer recursively. This function should call the merge sub-routine. */ 
    if (left < right) {
        int mid = left + (right-left)/2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void merge(int arr[], int left, int mid, int right) {
    /* TODO: Implement the merge logic. */
    int p1 = left;
    int p2 = mid + 1;
    int arr2[right-left +1];

    for (int i = left; i <= right; i++) {
        arr2[i - left] = arr[i];
    }

    for (int i = left; i <= right; i++) {
        if (p1 > mid) {
            arr[i] = arr2[p2-left];
            p2++;
        } else if (p2 > right){
            arr[i] = arr2[p1-left];
            p1++;
        } else if (arr[p1-left] <= arr[p2-left]) {
            arr[i] = arr2[p1-left];
            p1++;
        } else {
            arr[i] = arr2[p2-left];
            p2++;
        }
        }
    }

