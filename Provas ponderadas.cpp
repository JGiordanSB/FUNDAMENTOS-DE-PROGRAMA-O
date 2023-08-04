#include <iostream>
using namespace std;

struct Nota{
    float nota;
};

struct Peso{
    int peso;
};

void leituraN(Nota& prova){
    cin >> prova.nota;
}

void leituraP(Peso& pes){
    cin >> pes.peso;
}

void mediaPon(Nota* x, Peso* y, int size){
    float notaS = 0;
    int pesoS = 0;
    
    for(int i = 0; i < size; i++){
        notaS += x[i].nota * y[i].peso;
        
        pesoS += y[i].peso;
    }
    
    cout.precision(2);
    cout << fixed << notaS / pesoS << endl;
}

int main(){
    int size = 0;
    cin >> size;
    
    Nota notas [size];
    Peso pesos [size];
    
    for(Nota& nota : notas){
        leituraN(nota);
    }
    
    for(Peso& peso : pesos){
        leituraP(peso);
    }
    
    mediaPon(notas, pesos, size);
}
