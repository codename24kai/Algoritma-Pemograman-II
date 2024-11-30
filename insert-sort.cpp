// INSERT SORT
#include <iostream>
using namespace std;

#define N 7 

void SisipanSort(int data[], int n);

int main() 
{
    int i, n = N ;
    int data[] = {36, 2, 5, 31, 40, 4, 7, 3};

     cout << "Sebelum diurutkan: ";
    for (int i = 0; i <= n; i++) {
        cout << data[i] << " ";
    }

    SisipanSort(data, n);

    cout << "\nSetelah diurutkan: ";
    for (int i = 0; i <= n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}

void SisipanSort(int data[], int n) 
{
    int i, j, x;
    bool ketemu;

    for(i = 1; i <= n; i++) 
    {
        x = data[i];
        j = i - 1;
        ketemu = false;

        while((j >= 0) && (!ketemu)) 
        {
            if(x < data[j]) 
            {
                data[j + 1] = data[j];
                j = j - 1;
            } 
            else 
            {
                ketemu = true;
            }
        }
        data[j + 1] = x;
    }
}