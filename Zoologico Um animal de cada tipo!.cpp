#include <iostream>
using namespace std;

void ordcv(int* animais, int tam){
    int aux;
    int i = 0;

    while(i < tam){
        for(int j = 0; j < tam-1; j++){
            if(animais [j] > animais [j+1]){
                aux = animais [j];
                animais [j] = animais [j+1];
                animais [j+1] = aux;
            }
        }

        i ++;
    }
}

void cadanimal(int* animais, int tam){
    cout << animais [0] << " ";

    for(int i = 0; i < tam-1; i++){
        if(animais [i] != animais [i+1]){
            cout << animais [i+1] << " ";
        }
    }

    cout << endl;
}

int main(){
    int tam = 0;
    cin >> tam;
    int animais [tam];

    for(int i = 0; i < tam; i++){
        cin >> animais [i];
    }

    ordcv(animais, tam);
    cadanimal(animais, tam);
}
