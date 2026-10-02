
#include <stdio.h>

void revarray(int arr[], int n) {
    int i = 0, j = n - 1, temp;

    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    revarray(arr, n); //call by referance

    printf("Reversed array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
