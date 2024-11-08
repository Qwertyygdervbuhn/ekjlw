#include <iostream>
using namespace std;

template <typename T>
T findMaxInArray(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
T findMaxIn2Array(T arr[][3], int mass1, int cols) {
    T max = arr[0][0];
    for (int i = 0; i < mass1; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main() {
    int arr1D[] = { 3, 5, 9, 2, 8 };
    int size1D = 5;
    cout << "Max in 1 mass: " << findMaxInArray(arr1D, size1D) << endl;

    int arr2D[2][3] = { {1, 4, 7}, {3, 6, 9} };
    cout << "Max in 2 mass: " << findMaxIn2Array(arr2D, 2, 3) << endl;

}
