#include <iostream>
using namespace std;

void invertido(string& frase){
    for(int i = 0; i < frase.size(); i++){
        if(frase [i] >= 'a' && frase [i] <= 'z'){
            frase [i] -= 32;
        }
        
        else if(frase [i] >= 'A' && frase [i] <= 'Z'){
            frase [i] += 32;
        }
    }
}

int main(){
    string frase;
    getline(cin, frase);
    
    invertido(frase);
    
    cout << frase << endl;
}
