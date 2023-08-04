#include <iostream>
using namespace std;

void ordemc(int* vetor, int tam){
    int i = 0;
    int aux = 0;
    
    while(i < tam){
        for(int j = 0; j < tam-1; j++){
            if(vetor [j] > vetor [j+1]){
              aux = vetor [j];
              vetor [j] = vetor [j+1];
              vetor [j+1] = aux;
            }
        }
        
        i++;
    }
}

int main(){
    int tam = 0;
    cin >> tam;
    
    int vetor [tam];
    
    for(int i = 0; i < tam; i++){
        cin >> vetor [i];
    }
    
    ordemc(vetor, tam);
    
    for(int i = 0; i < tam; i++){
        cout << vetor [i] << " ";
    }
    
    cout << endl;
}
