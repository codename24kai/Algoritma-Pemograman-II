#include <iostream>   
#include <iomanip>    
using namespace std;

int main() {
    int Nilai[20];
    int i, j, k, N;
    int temp;
    bool tukar;

    // Input jumlah elemen
    cout << "Masukkan Banyak Bilangan: ";
    cin >> N;

    // Input nilai elemen
    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i << ": ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses Pengurutan Bubble Sort
    i = 0;
    tukar = true;
    while ((i <= N - 2) && tukar) {
        tukar = false;
        for (j = N - 1; j >= i + 1; j--) {
            if (Nilai[j] < Nilai[j - 1]) {
                // Tukar nilai jika urutan salah
                temp = Nilai[j];
                Nilai[j] = Nilai[j - 1];
                Nilai[j - 1] = temp;
                tukar = true;

                // Cetak array pada setiap perubahan
                cout << endl;
                for (k = 0; k < N; k++)
                    cout << setw(3) << Nilai[k];
            }
        }
        i++;
    }

    // Proses Cetak Setelah Diurutkan
    cout << "\nData setelah diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    return 0;
}
