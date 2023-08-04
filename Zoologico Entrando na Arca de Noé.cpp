#include <iostream>
#include <cmath>
using namespace std;

bool igual(int num1, int num2){
    if(abs(num1 - num2) < 0.0000001){
        return true;
    }
    return false;
}

void casais(int* animais, int tam, int ref, int& qntP){
    int x = ref;

    if(ref < tam-1){
        x ++;
    }

    for(int i = x; i < tam; i++){
        if(igual(animais [ref], animais [i] * -1)){
            qntP ++;
            animais [ref] = 100;
            animais [i] = 100;
        }
    }
}

int main(){
    int tam = 0;
    cin >> tam;
    int animais [tam];

    for(int& animal : animais){
        cin >> animal;
    }

    int qntP = 0;

    for(int i = 0; i < tam; i++){
        casais(animais, tam, i, qntP);
    }

    cout << qntP << endl;
}
