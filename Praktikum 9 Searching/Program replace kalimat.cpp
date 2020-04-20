#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
        int i,len;
        string str;
        char sebelumchar, replacechar;
        cout << "\t\t\t\t===============================\t\t\t\t" << endl;
        cout << "\t\t\t\t    PROGRAM REPLACE KALIMAT\t\t\t\t" << endl;
        cout << "\t\t\t\t===============================\t\t\t\t" << endl<<endl;
        cout<<"Masukkan sebuah kalimat: ";
        cin>>str;

        cout<<"\nMasukkan karakter yang dicari: ";
        cin>>sebelumchar;

        cout<<"\nKarakter pengganti: ";
        cin>>replacechar;

        len=str.length();

        for(i=0 ; i<len ; i++)
        {
                if(str[i]==sebelumchar)
                {
                         str[i]=replacechar;
                }
        }

        cout<<"\nHasil Replace kata adalah: "<<str;
        getch();
        return 0;
}


