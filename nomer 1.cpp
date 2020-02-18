 #include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int matA [2][2] = {4, 2, 8, 10};
    int matB [2][2] = {-5, 8, 4, -12};
    int j,k;
    cout << "Matriks A" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << matA[j][i]<< " ";
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

    cout << "Hasil penjumlahan Matriks A dan B" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            //Soal penjumlahan kedua matriks
            cout <<matA [j][i] + matB[j][i] << " ";
        }
        cout << endl;
    }

    system("PAUSE");
    return 0;
}
