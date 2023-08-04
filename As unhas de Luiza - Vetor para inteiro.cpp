#include <iostream>
using namespace std;

int busca(int* vetor, int tam){
        for(int i = 0; i < tam; i++){
            if(vetor [i] != 0){
                return i;
            }
        }
        
        return -1;
    }

int main(){
    
    int tam = 0;
    cin >> tam;
    
    int vetor [tam];
    
    for(int i = 0; i < tam; i++){
        cin >> vetor[i];
    }
    
    int inc = busca(vetor, tam);
    
    if(inc == -1){
        cout << 0 << endl;
    } else {
        for(int i = inc; i < tam; i++){
            cout << vetor [i];
        }
    }
    
    cout << endl;
}


