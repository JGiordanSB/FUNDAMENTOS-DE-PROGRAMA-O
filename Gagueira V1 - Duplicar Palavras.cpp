#include <iostream>
using namespace std;

bool Eletra(char letra){
    bool teste = false;
    
    if(letra >= 'a' && letra <= 'z' || letra >= 'A' && letra <= 'Z'){
        teste = true;
    }
    
    return teste;
}

int main(){
    string frase;
    getline(cin, frase);
    
    string backup;
    
    for(int i = 0; i < frase.size(); i++){
        if( Eletra(frase [i]) ){
            backup += frase [i];
        } else {
            cout << backup << ' ' << backup << ' ';
            
            backup = "";
        }
    }
    
    cout << backup << ' ' << backup << ' ';
    
    cout << endl;
}
