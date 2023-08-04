#include <iostream>
using namespace std;

struct Aluno{
    string nome;
    int matri;
    string materia;
    float nota;
};

void leitura(Aluno& x){
    cin >> x.nome;
    cin >> x.matri;
    cin >> x.materia;
    cin >> x.nota;
}

// void leitura(Aluno& b){
//     cin >> b.nome;
//     cin >> b.matri;
//     cin >> b.materia;
//     cin >> b.nota;
// }

void maior(Aluno a, Aluno b){
    cout.precision(1);
    cout << fixed;
    
    if(a.nota > b.nota){
        cout << a.nome << " , " << a.nota;
    } else if(b.nota > a.nota){
        cout << b.nome << " , " << b.nota;
    } else {
        cout << a.nome << " e " << b.nome << " , " << a.nota;
    }
    
    cout << endl;
}

int main(){
    Aluno a;
    Aluno b;
    
    leitura(a);
    leitura(b);
    
    maior(a, b);
}
