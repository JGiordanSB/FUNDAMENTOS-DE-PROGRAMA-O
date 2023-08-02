#include <iostream>
using namespace std;

void decres(int* vetor, int tam){
    int count = 0;
    
    for(int i = 0; i < tam-1; i++){
        if(vetor[i] > vetor [i+1]){
            count ++;
        }
    }
    
    if(count == tam-1){
        cout << 'D' << endl;
    } else {
        cout << 'N' << endl;
    }
}

void cres(int* vetor, int tam){
    int count = 0;
    
     for (int i = 0; i < tam-1; i++){
        if(vetor [i] < vetor [i+1]){
            count ++;
        }
     }
     
     if(count == tam-1){
        cout << 'C' << endl;
    } else {
        cout << 'N' << endl;
    }
}

int main(){
    int tam = 5;
    
    int vetor [tam];
    
    for(int i = 0; i < tam; i++){
        cin >> vetor [i];
    }
    
    int maior = vetor [0];
    int menor = vetor [0];
    
    for(int i = 1; i < tam; i++){
        if(maior < vetor [i]){
            maior = vetor [i];
        }
    
        if(menor > vetor [i]){
            menor = vetor [i];
        }
    }
    
    if(maior == vetor [0]){
        decres(vetor, tam);
    } else if(menor == vetor [0]){
        cres(vetor, tam);
    } else {
        cout << 'N' << endl;
    }
}
