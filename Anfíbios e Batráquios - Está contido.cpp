#include <iostream>
using namespace std;

bool teste(int* vetor2, int tam2, int num){
    for(int i = 0; i < tam2; i++){
        if (vetor2 [i] == num){
            return true;
        }
    }
    
    return false;
}

int main(){
    int tam1;
    cin >> tam1;
    
    int vetor1 [tam1];
    
    for(int i = 0; i < tam1; i++){
        cin >> vetor1 [i];
    }
    
    int tam2;
    cin >> tam2;
    
    int vetor2 [tam2];
    
    for(int i = 0; i < tam2; i++){
        cin >> vetor2 [i];
    }
    
    int count = 0;
    
    for(int i = 0; i < tam1; i ++){
        int resultado = teste(vetor2, tam2, vetor1 [i]);
        
        if(resultado == true){
            count ++;
        }
    }
    
    if(count != tam1){
        cout << "nao" << endl;
    } else {
        cout << "sim" << endl;
    }
    
    
}
