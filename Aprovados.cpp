#include <iostream>
using namespace std;

struct Aluno{
    string nome;
    float notas [3];
    
    void media(){
        float somaN = 0;
        
        for(float nota : notas){
            somaN += nota;
        }
        
        float mediaA = somaN / 3;
        
        if(mediaA >= 7){
            cout.precision(2);
            
            cout << fixed << nome << ' ' << mediaA <<endl;
        }
    }
};

void leitura(Aluno& aluno){
    cin >> aluno.nome;
    
    for(float& nota : aluno.notas){
        cin >> nota;
    }
}

int main() {
    int size;
    cin >> size;
    
    Aluno turma [size];
    
    for(Aluno& aluno : turma){
        leitura(aluno);
    }
    
    for(Aluno aluno : turma){
        aluno.media();
    }
}
