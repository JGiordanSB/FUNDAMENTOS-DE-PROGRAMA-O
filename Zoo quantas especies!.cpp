#include <iostream>
using namespace std;

void ordc(int* animais, int tam){

    int aux = 0, i = 0;

    while(i < tam){
        for(int j = 0; j < tam - 1; j++){
            if(animais [j] > animais [j+1]){
                aux = animais [j];
                animais [j] = animais [j+1];
                animais [j+1] = aux;
            }
        }

        i++;
    }
}

void animaisnum(int* animais, int tam, int& x){

    for(int i = 0; i < tam - 1; i++){
        if(animais [i] != animais [i+1]){
            x++;
        }
    }
}

int main(){
    int tam = 0;
    cin >> tam;

    int animais [tam];

    for(int i = 0; i < tam; i++){
        cin >> animais [i];
    }

    ordc(animais, tam);

    int x = 1;
    animaisnum(animais, tam, x);

    cout << x << endl;
}
