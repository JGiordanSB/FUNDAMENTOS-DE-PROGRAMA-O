#include <iostream>
using namespace std;

// void imprimeMatriz( int matriz[][10], int l, int c ) {
//     for(int i = 0; i < l; i++){
//         for(int j = 0; j < c; j++){
//             cout << matriz [i] [j] << " ";
//         }
//         cout << endl;
//     }
// }

int main(){
    int l = 5;
    int c = 5;
    
    int matriz [l] [c];
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin >> matriz [i] [j];
        }
    }

    // imprimeMatriz( matriz, l, c);

    float somaP = 0, somaS = 0;
    
    for(int i = 0; i < l; i++){
        somaP += matriz [i] [i];
        somaS += matriz [i] [(l-1) - i];
    }
    
    cout << somaP - somaS << endl;
}
