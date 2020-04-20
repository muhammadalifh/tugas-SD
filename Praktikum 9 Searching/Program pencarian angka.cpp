#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
      int i,n;
      int cari,ketemu=0;
      int A[100];

        cout << "\t\t\t\t===============================\t\t\t\t" << endl;
        cout << "\t\t\t\t    PROGRAM PENCARIAN ANGKA\t\t\t\t" << endl;
        cout << "\t\t\t\t===============================\t\t\t\t" << endl<<endl;
        cout<<"Masukan Banyak Angka : ";
        cin>>n;
        cout<<endl;

      for (i=1;i<=n;i++)
          {
            cout<<"Masukan Angka Ke-"<<i<<" : ";
            cin>>A[i];
          }
      cout<<endl;
      cout<<"Input Bilangan yang dicari : ";
      cin>>cari;
      cout<<endl;

      for(i=0;i<=n;i++)
          {
                  if (A[i]==cari)
                      {
                          ketemu=1;
                          cout<<"Data Ditemukan Pada Indeks Ke-"<< i << endl;
                      }
          }
      if (ketemu==0)
          {
                cout<<"Data tidak ditemukan";
          }
      getch();
      return 0;
  }

