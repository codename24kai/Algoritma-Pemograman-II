#include <iostream>
#include <fstream>
using namespace std;

const int MAX_SIZE = 100; // Ukuran maksimum array

// Fungsi untuk menampilkan menu
void displayMenu() {
    cout << "========== UTS SELECTION SORT ==============" <<endl;
    cout << "========= ALGORITMA DAN PEMOGRAMAN =========" <<endl;
    cout << "=== Muhammad Keisa Nabhan / 231011403449 ===" <<endl;
    cout << "\n================= MENU =====================" << endl;
    cout << "1. Memasukan sejumlah data dari keyboard" << endl;
    cout << "2. Menyimpan seluruh data kedalam sebuah arsip" << endl;
    cout << "3. Membaca data dari arsip" << endl;
    cout << "4. Menampilkan data" << endl;
    cout << "5. Mengurutkan data" << endl;
    cout << "6. Menampilkan data yang telah diurutkan" << endl;
    cout << "7. Keluar Program" << endl;
    cout << "Pilihan Anda: ";
}


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; 
            }
        }
        
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int data[MAX_SIZE];
    int dataCount = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Masukkan data (0 untuk berhenti):" << endl;
                int input;
                while (dataCount < MAX_SIZE) {
                    cin >> input;
                    if (input == 0) break; // Berhenti jika pengguna memasukkan 0
                    data[dataCount++] = input; // Menyimpan data ke dalam array
                }
                break;
            }
            case 2: {
                ofstream outFile("data.txt"); // Membuka file untuk menyimpan data
                if (outFile.is_open()) {
                    for (int i = 0; i < dataCount; i++) {
                        outFile << data[i] << endl; // Menyimpan setiap data ke dalam file
                    }
                    outFile.close(); // Menutup file
                    cout << "Data berhasil disimpan ke arsip." << endl;
                } else {
                    cout << "Gagal membuka file untuk menyimpan data." << endl;
                }
                break;
            }
            case 3: {
                ifstream inFile("data.txt"); // Membuka file untuk membaca data
                if (inFile.is_open()) {
                    dataCount = 0; // Reset jumlah data
                    while (inFile >> data[dataCount] && dataCount < MAX_SIZE) {
                        dataCount++; // Membaca data dari file dan menyimpannya ke dalam array
                    }
                    inFile.close(); // Menutup file
                    cout << "Data berhasil dibaca dari arsip." << endl;
                } else {
                    cout << "Gagal membuka file untuk membaca data." << endl;
                }
                break;
            }
            case 4: {
                cout << "Data saat ini:" << endl;
                for (int i = 0; i < dataCount; i++) {
                    cout << data[i] << " "; // Menampilkan semua data
                }
                cout << endl;
                break;
            }
            case 5: {
                selectionSort(data, dataCount); // Mengurutkan data menggunakan selection sort
                cout << "Data telah diurutkan." << endl;
                break;
            }
            case 6: {
                cout << "Data yang telah diurutkan:" << endl;
                for (int i = 0; i < dataCount; i++) {
                    cout << data[i] << " "; // Menampilkan data yang telah diurutkan
                }
                cout << endl;
                break;
            }
            case 7: {
                cout << "Terima kasih, program selesai." << endl; // Keluar dari program
                break;
            }
            default: {
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl; // Menangani pilihan yang tidak valid
                break;
            }
        }
    } while (choice != 7); // Ulangi sampai pengguna memilih untuk keluar

    return 0; // Menambahkan nilai kembalian untuk fungsi main
}
