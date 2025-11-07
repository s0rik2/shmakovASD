#include <iostream>

int arraySum(const int arr[], int size) {
    if (size == 0) return 0;
    if (size == 1) return arr[0];
    return arr[size - 1] + arraySum(arr, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << arraySum(arr, size) << std::endl;
    return 0;
}
