#include <iostream>
using namespace std;

struct Aluno{
    string nome;
    float notas [3];
};

void leitura(Aluno& aluno){
    cin >> aluno.nome;
    
    for(float& nota : aluno.notas){
        cin >> nota;
    }
}

float media(Aluno aluno){
    float soma = 0;
    
    for(float& nota : aluno.notas){
        soma += nota;
    }
    
    return soma / 3;
    
}

void mediaG(float somaM, int size){
    cout.precision(2);
    
    cout << fixed << somaM / size << endl;
}

int main(){
    int size = 4;
    cin >> size;
    
    Aluno turma [size];
    
    for(Aluno& aluno : turma){
        leitura(aluno);
    }
    
    float somaM = 0;
    
    for(Aluno aluno : turma){
       somaM += media(aluno);
    }
    
    mediaG(somaM, size);
}
