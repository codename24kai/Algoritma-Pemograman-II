#include <iostream>
using namespace std;

#define N 8 

void InsertionSort(int sizes[], int quantity[], int n);

int main() {
    int sizes[N] = {42, 39, 41, 38, 45, 40, 37, 43};
    int quantity[N] = {157, 129, 135, 112, 169, 143, 101, 155};

    cout << "Sebelum diurutkan:\n";
    cout << "Ukuran Sepatu\tJumlah\n";
    for (int i = 0; i < N; i++) {
        cout << sizes[i] << "\t\t" << quantity[i] << endl;
    }

    InsertionSort(sizes, quantity, N);

    cout << "\nSetelah diurutkan:\n";
    cout << "Ukuran Sepatu\tJumlah\n";
    for (int i = 0; i < N; i++) {
        cout << sizes[i] << "\t\t" << quantity[i] << endl;
    }

    return 0;
}

void InsertionSort(int sizes[], int quantity[], int n) {
    for (int i = 1; i < n; i++) {
        int keySize = sizes[i];
        float keyquanty = quantity[i];
        int j = i - 1;

        while (j >= 0 && sizes[j] > keySize) {
            sizes[j + 1] = sizes[j];
            quantity[j + 1] = quantity[j];
            j--;
        }
        sizes[j + 1] = keySize;
        quantity[j + 1] = keyquanty;
    }
}
