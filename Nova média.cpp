#include <iostream>
using namespace std;

struct Aluno{
    string nome;
    float notas [3];
    
    void leitura(){
        cin >> nome;
        for(float& nota : notas){
            cin >> nota;
        }
    }
};

void media(Aluno x){
    float soma = 0;
    
    for(float& nota : x.notas){
        soma += nota;
    }
    
    cout.precision(2);
    
    cout << fixed << soma / 3 << endl;
}


int main(){
    Aluno a;
    
    a.leitura();
    media(a);
}
