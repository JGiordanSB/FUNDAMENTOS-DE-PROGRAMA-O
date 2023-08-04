#include <iostream>
using namespace std;

int main(){
    int notas [2] [3];
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> notas [i] [j];
        }
    }
    
    int soma = 0;
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            soma += notas [i] [j];
        }
    }
    
    cout << soma << endl;
}
