#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
    int matA [2][2] = {4, 2, 8, 10};
   cout << "Matriks A" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << matA[j][i] << " ";
        }
        cout << endl ;
    }
cout << "hasil dari eksponen 5" << endl;
   for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout <<pow(matA [j][i], 5) << " ";
        }
        cout << endl;
    }

return 0;
}
