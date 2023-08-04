#include <iostream>
using namespace std;

int posMin(float* notas, int tam, int indini){
    int indmin = indini;
    
    for(int i = indini; i < tam; i++){
        if(notas [indmin] > notas [i]){
            indmin = i;
        }
    }
    
    return indmin;
}

void troca(float& a, float& b){
    float aux = b;
    b = a;
    a = aux;
}

void impar(float* notas, int num){
    int inM = (num-1) / 2;
    cout << notas [inM];
}

void par(float* notas, int num){
    int inM = num / 2;
    
    float mediana = (notas [inM-1] + notas [inM]) / 2;
    
    cout << mediana << endl;
}

int main(){
    int tam = 0;
    cin >> tam;
    float notas [tam];
    
    for(float& nota : notas){
        cin >> nota;
    }
    
    int inMin = 0;
    
    for(int i = 0; i < tam; i++){
        inMin = posMin(notas, tam, i);
        troca(notas [i], notas [inMin]);
    }
    
    //mediana
    if(tam % 2 != 0){
        impar(notas, tam);
    } else {
        par(notas, tam);
    }
}






