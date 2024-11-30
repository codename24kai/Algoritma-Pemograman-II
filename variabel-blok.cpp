// #include <iostream>
// using  namespace std;

// int main() increment
// {
//     int i;
//     for (i=0; i<10; i++)
//     {
//         cout << i <<" ";
//     }
//     cout<< i; 
// }

// int main() decrement
// {
//     int i;
//     for (i=10; i>0; i--)
//     {
//         cout << i <<" ";
//     }
//     cout<< i; 
// }

// #include <iostream> variabel global
// using namespace std;


// char bintang[] = "**************";
// void judul(){
//     cout << bintang << endl;
//     cout << "Selamat datang" <<endl;
//     cout << bintang << endl;

// }

// int main(){
//     judul();
//     cout << bintang << endl;
// }


// #include <iostream> variabel lokal
// using namespace std;

// void judul(){
//     // Variabel lokal bintang di dalam fungsi judul
//     char bintang[] = "**************";
//     cout << bintang << endl;
//     cout << "Selamat datang" << endl;
//     cout << bintang << endl;
// }

// int main(){
//     // Variabel lokal bintang di dalam fungsi main
//     char bintang[] = "**************";
    
//     judul();  // Memanggil fungsi judul
//     cout << bintang << endl;  // Mengakses variabel lokal bintang di main
// }
