#include <iostream>
using namespace std;

void hcon(int* vetor, int tam){
    int count = 0;
    
    for(int i = 0; i < tam; i++){
        if(i == 0){
            if(vetor [i] == 0 && vetor [i+1] == 0){
                count ++;
            }
        }
        
        else if(i == tam-1){
            if(vetor [i-1] == 0 && vetor [i] == 0){
                count ++;
            }
        }
        
        else {
            if(vetor [i-1] == 0 && vetor [i] == 0 && vetor [i+1] == 0){
                count ++;
            }
        }
    }
    
    cout << count << endl;
}

int main(){
    int tam = 0;
    cin >> tam;
    
    int fila [tam];
    
    for(int i = 0; i < tam; i++){
        cin >> fila [i];
    }
    
    hcon(fila, tam);
    
}
