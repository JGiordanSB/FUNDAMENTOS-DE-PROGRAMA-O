#include <iostream>
using namespace std;

int elementosM(int* conts, int tam){
    int maior = conts [1];
    for(int i = 2; i < 10; i++){
        if(maior < conts [i]){
            maior = conts [i];
        }
    }
    
    return maior;
}

int main(){
    int num = 0;
    cin >> num;
    int tazos [num];
    
    for(int& tazo : tazos){
        cin >> tazo;
    }
    
    int conts [10];
    
    for(int& cont : conts){
        cont = 0;
    }
    
    for(int tazo : tazos){
        conts [tazo] ++;
    }
    
    int x = elementosM(conts, 10);
    
    for(int i = 1; i < 10; i++){
        if(conts [i] == x){
            cout << i << " ";
        }
    }
    
    cout << endl;
}
