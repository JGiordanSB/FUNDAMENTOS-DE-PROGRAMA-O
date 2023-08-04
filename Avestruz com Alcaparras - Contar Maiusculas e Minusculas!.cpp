#include <iostream>
using namespace std;

int teste(string frase, char letra){
    int count = 0;
    
    if(letra >= 'A' && letra <= 'Z'){
        letra += 32;
    }
    
    for(int i = 0; i < frase.size(); i++){
        if(frase [i] >= 'A' && frase [i] <= 'Z'){
            frase [i] += 32;
        }
        
        if(frase [i] == letra){
            count ++;
        }
    }
    
    return count;
}

int main(){
    string frase;
    getline(cin, frase);
    
    char letra;
    cin >> letra;
    
    int res = teste(frase, letra);
    
    cout << res << endl;
}
