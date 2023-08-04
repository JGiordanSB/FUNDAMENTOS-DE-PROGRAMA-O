#include <iostream>
using namespace std;

bool contido(char letra, char* letraV){
    bool teste = false;
    
    for(int i = 0; i < 10; i++){
        if(letraV [i] == letra){
            teste = true;
        }
    }
    
    return teste;
}

bool vogal(char letra){
    bool teste = false;
    
    if(letra >= 'a' && letra <= 'z' || letra >= 'A' && letra <= 'Z'){
        teste = true;
    }
    
    return teste;
}

void filaRU(string frase, string& vogais, string& consoante){
    char letraV [] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    for(int i = 0; i < frase.size(); i++){
        if(vogal(frase [i])){
            if(contido(frase [i], letraV)){
                vogais += frase [i];
            } else {
                consoante += frase [i];
            }   
        }
    }
}

int main(){
    string frase;
    getline(cin, frase);
    
    string vogais;
    string consoante;
    
    filaRU(frase, vogais, consoante);
    
    cout << vogais << endl << consoante << endl;
}
