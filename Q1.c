#include <stdio.h>

int count_inversions(int arr[], int n) {
    int inversions = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inversions++;
            }
        }
    }
    return inversions;
}

int main() {
    int arr[] = {2, 4, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Total Inversions: %d\n", count_inversions(arr, n));
    return 0;
}
