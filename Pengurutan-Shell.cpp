#include <iostream>
using namespace std;

void pengurutanShell(int data[], int n);
void PengurutanSisipan(int data[], int n, int mulai, int melangkah);

int main() {
    int data[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(data) / sizeof(data[0]) - 1;

    pengurutanShell(data, n);
    cout << "\nSetelah diurutkan: ";
    for (int i = 0; i <= n; i++)
        cout << " " << data[i];
    
    return 0;
}

void pengurutanShell(int data[], int n) {
    for (int melangkah = n / 2; melangkah > 0; melangkah /= 2) {
        for (int mulai = melangkah; mulai <= n; mulai++) {
            PengurutanSisipan(data, n, mulai, melangkah);
        }
    }
}

void PengurutanSisipan(int data[], int n, int mulai, int melangkah) {
    int x = data[mulai];
    int j = mulai;
    while (j >= melangkah && data[j - melangkah] > x) {
        data[j] = data[j - melangkah];
        j -= melangkah;
    }
    data[j] = x;
}