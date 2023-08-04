#include <iostream>
using namespace std;

struct Aluno{
    string nome;
    int matri;
    string disc;
    float nota;
};

void leitura(Aluno& x){
    cin >> x.nome;
    cin >> x.matri;
    cin >> x.disc;
    cin >> x.nota;
}

void media(Aluno x, Aluno y){
    cout.precision(2);
    float media = (x.nota + y.nota) / 2.0;
    cout << fixed << "Média = " << media << endl;
}

int main(){
    Aluno a;
    Aluno b;
    
    leitura(a);
    leitura(b);
    
    media(a, b);
}
