#include <iostream>
using namespace std;

void leitura(int matriz [3] [3]){
    for(int m = 0; m < 3; m++){
        for(int n = 0; n < 3; n++){
            cin >> matriz [m] [n];
        }
    }
}

bool teste(int matriz [3] [3]){
    
    for(int m = 0; m < 3; m++){
        for(int n = 0; n < 3; n++){
            if(m != n){
                if(matriz [m] [n] != matriz [n] [m]){
                    return false;
                }
            }
        }
    }
    
    return true;
}

int main(){
    int matriz [3] [3];
    
    leitura(matriz);
    
    if( teste(matriz) ){
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }
    
}
