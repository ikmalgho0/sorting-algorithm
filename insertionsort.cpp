#include <iostream>
using namespace std;

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int kunci = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > kunci) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = kunci;
    }
}

int main() {
    int data[] = {5, 3, 8, 1, 4};
    int n = 5;

    insertionSort(data, n);

    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}