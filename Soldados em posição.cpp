#include <iostream>
using namespace std;

void leitura(int matriz [3] [3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz [i] [j];
        }
    }
}

int main(){
    int matriz [3] [3];
    
    leitura(matriz);
    
    int count = 0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(matriz [j] [i] < matriz [j+1] [i]){
                count ++;
            }
        }
    }
    
    cout << count << endl;
    
    
}
