#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int matri;
    string disc;
    float nota;
};

void leitura(Aluno& a){
    cin >> a.nome;
    cin >> a.matri;
    cin >> a.disc;
    cin >> a.nota;
}

void saida(Aluno a){
    cout << "Nome = " << a.nome << endl;
    cout << "Matrícula = " << a.matri << endl;
    cout << "Disciplina = " << a.disc << endl;
    cout.precision(1);
    cout << "Nota = " << fixed << a.nota << endl;
}

int main(){
    Aluno a;
    
    leitura(a);
    saida(a);
}
