#include <iostream>
using namespace std;

int buscaEn(int* casas, int numC, int encomenda){
    for(int i = 0; i < numC; i++){
        if(casas [i] == encomenda){
            return i;
        }
    }

    return -1;
}

void entrega(int* casas, int destino, int& posiAtual, int& tempo){
    if(posiAtual > destino){
        for(int i = posiAtual; i >= destino; i--){
            if(casas [i] == casas [destino]){
                posiAtual = i;
            } else {
                tempo ++;
            }
        }
    } else{
        for(int i = posiAtual; i <= destino; i++){
            if(casas [i] == casas [destino]){
                posiAtual = i;
            } else {
                tempo ++;
            }
        }
    }
}

int main(){
    int numC = 0;
    cin >> numC;
    int casas [numC];

    int numE = 0;
    cin >> numE;
    int encomenda;

    for(int& casa : casas){
        cin >> casa;
    }

    int tempo = 0;
    int posiAtual = 0;
    int destino;

    for(int i = 0; i < numE; i++){
        cin >> encomenda;
        destino = buscaEn(casas, numC, encomenda);
        entrega(casas, destino, posiAtual, tempo);
    }

    cout << tempo << endl;
}
