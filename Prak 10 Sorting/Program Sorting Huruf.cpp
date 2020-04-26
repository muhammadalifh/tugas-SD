#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void urut(int n,char abjad[30][30]){
    char temp;
    int i,j,k,l;
        for(i=1;i<=n;i++){
            for(j=i;j<n;j++){
                for(l=0;l<10;l++){
                    if(abjad[i-1][l]<abjad[j][l]){
                    break;
                    }
                    if(abjad[i-1][l]>abjad[j][l]){
                        for(k=0;k<10;k++){
                            temp=abjad[i-1][k];
                            abjad[i-1][k]=abjad[j][k];
                            abjad[j][k]=temp;
                        }
                        break;
                }
            }
        }
    }
}

int main(){
    char abjad[30][30];
    int i,n;
        cout << "\t\t\t\t===============================\t\t\t\t" << endl;
        cout << "\t\t\t\t    PROGRAM SORTING HURUF\t\t\t\t" << endl;
        cout << "\t\t\t\t===============================\t\t\t\t" << endl<<endl;

    cout<<"Masukkan jumlah huruf: ";
    cin>>n;
    cout << endl;
    for(i=0;i<n;i++){
        cout<<"Masukkan huruf : ";
        cin>>abjad[i];
    }
    cout << endl;
    cout << "huruf yang belum terurut : ";
    for(i=0;i<n;i++){
    cout << " "<<abjad[i];
    }
    urut(n,abjad);
    cout << endl;
    cout << "huruf yang sudah terurut sesuai alphabet : ";
    for(i=0;i<n;i++){
    cout << " "<<abjad[i];
    }

    getch();
}
