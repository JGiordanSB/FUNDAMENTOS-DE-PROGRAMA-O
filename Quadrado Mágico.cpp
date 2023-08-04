#include <iostream>
using namespace std;

void leitura(int matriz [3] [3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz [i] [j];
        }
    }
}

void magico(int matriz [3] [3], int* somaS){
    int somap = 0;
    int somas = 0;
    
    
    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 3; j++){
            if(i == j){
                somap += matriz [i] [j];
                
            }
            
            
            if(i+j == 2){
                somas += matriz [i] [j];
                
            }
        }
    }
    
    somaS [0] = somap;
    somaS [1] = somas;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            somaS[2+i] += matriz[i] [j];
        }
    }

    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            somaS[2+3+j] += matriz[i] [j];
        }
    }
        
}


bool teste(int* somaS){
    for(int i = 0; i < 7; i++){
        if(somaS [i] != somaS [i+1]){
            return false;
        }
    }
    
    return true;
}

int main(){
    int matriz [3] [3];
    leitura(matriz);
    
    int somaS [8];
    
    for(int& elem : somaS){
        elem = 0;
    }
    
    magico(matriz, somaS);
    
    if( teste(somaS) ){
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }
}
