#include <iostream>
#include<windows.h>
using namespace std;

int main(int argc, char *argv[])
{
    int matA [2][2] = {4, 2, 8, 10};
    int matB [2][2] = {-5, 8, 4, -12};
    int matC [2][2];
    int j,k,c;
    int d=0;
    cout << "Matriks A" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << matA[j][i] << " ";
        }
        cout << endl;
    }

      cout << "Matriks B" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << matB[j][i] << " ";
        }
        cout << endl;
    }

    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            matC[j][i]=0;
            for (int k=0;k<2;k++)
            {
                d=matA[j][k]*matB[k][i];
                matC[j][i]=matC[j][i]+d;
            }
        }
   }
    cout << "Hasil kali" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
           cout << " " << matC[j][i];
        }
        cout << endl;
    }

    system("PAUSE");
    return 0;
}
