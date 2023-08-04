#include <iostream>
using namespace std;

void leituraV(int vetor [6]){
    for(int i = 0; i < 6; i++){
        cin >> vetor [i];
    }
}

void leituraM(int matriz [4] [4]){
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> matriz [i] [j];
        }
    }
}

bool busca(int matriz [4] [4], int num){
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz [i] [j] == num){
                return true;
            }
        }
    }
    
    return false;
}

int main(){
    int vetor [6];
    
    leituraV(vetor);
    
    int matriz [4] [4];
    
    leituraM(matriz);
    
    int count = 0;
    
    for(int i = 0; i < 6; i++){
        if( busca(matriz, vetor [i]) ){
            count ++;
        }
    }
    
    cout << count << endl;
    
}
