#include <stdio.h>

/* ---------- O(1) : Constant Time ---------- */
int get_first_element(int arr[]) {
    return arr[0];
}

/* ---------- O(n) : Linear Time ---------- */
void print_array(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* ---------- O(n^2) : Quadratic Time (Bubble Sort) ---------- */
void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/* ---------- O(log n) : Logarithmic Time (Binary Search) ---------- */
int binary_search(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    /* O(1) */
    printf("O(1): First element = %d\n", get_first_element(arr));

    /* O(n) */
    printf("O(n): Array elements: ");
    print_array(arr, n);

    /* O(n^2) */
    bubble_sort(arr, n);
    printf("O(n^2): Sorted array: ");
    print_array(arr, n);

    /* O(log n) */
    int key = 3;
    int index = binary_search(arr, n, key);

    if(index != -1)
        printf("O(log n): Element %d found at index %d\n", key, index);
    else
        printf("O(log n): Element not found\n");

    return 0;
}