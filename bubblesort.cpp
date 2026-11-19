#include <iostream>
using namespace std;

void tukar(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool adaTukar = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                tukar(a[j], a[j + 1]);
                adaTukar = true;
            }
        }
        if (!adaTukar) break;
    }
}

int main() {
    int data[] = {5, 3, 8, 1, 4};
    int n = 5;

    bubbleSort(data, n);

    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}