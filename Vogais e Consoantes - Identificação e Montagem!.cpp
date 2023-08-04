#include <iostream>
using namespace std;

bool vogal(char letra){
    bool teste = false;
    
    string vogais = "aeiouAEIOU";
    
    for(int i = 0; i < vogais.size(); i++){
        if(vogais [i] == letra){
            teste = true;
        } 
    }
    
    return teste;
}

bool Eletra(char letra){
    bool teste = false;
    
    if(letra >= 'a' && letra <= 'z' || letra >= 'A' && letra <= 'Z'){
        teste = true;
    }
    
    return teste;
}

int main(){
    string letras;
    getline(cin, letras);
    
    for(int i = 0; i < letras.size(); i++){
        if(vogal(letras [i])){
            cout << 'v';
        } else if(Eletra(letras [i])){
            cout << 'c';
        } else {
            cout << letras [i];
        }
    }
    
    cout << endl;
}
