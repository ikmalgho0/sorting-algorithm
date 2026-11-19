#include <iostream>
using namespace std;

void tukar(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int iMin = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[iMin])
            iMin = j;
        }
        if (iMin != i) tukar(a[i], a[iMin]);
    }
}

int main() {
    int data[] = {5, 3, 8, 1, 4};
    int n = 5;

    selectionSort(data, n);

    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}