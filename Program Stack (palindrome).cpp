#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int main ()
{
        char kata [50];
        int i,n;
        cout << "\t\t\t\t===============================\t\t\t\t" << endl;
        cout << "\t\t\t\tProgram mengecek kata palindrom\t\t\t\t" << endl;
        cout << "\t\t\t\t===============================\t\t\t\t" << endl<<endl;
        cout << "Masukkan kata : " ;
        cin >> kata;
        cout << endl;
        cout << "kata asli : " << kata << endl <<endl;
        n=strlen(kata);
        cout << "jumlah huruf : " << n << endl <<endl;
        cout << "kata dibalik : ";
        for (int i=n; i>=0; i--)
        {
            cout <<kata[i];
        }
        cout << endl<< endl;
        for (i=0; i<n; i++)
        {
            if (kata[i]!=kata [n-1-i])
            {
                i=n;
                cout << "Kata tersebut bukan palindrom";
            }
            else
            {
                i=n;
                cout << "Kata tersebut adalah palindrom";
            }
            cout << endl;
        }
        getch();
        return 0;
}

