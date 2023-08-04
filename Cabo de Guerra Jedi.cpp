#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cin >> num;
    
    int vetor [num];
    
    int num2 = num / 2;
    
    for(int i = 0; i < num; i++){
        cin >> vetor[i];
    }
    
    int soma1 = 0;
    
    for(int i = 0; i < num2; i ++){
        soma1 += vetor [i]; 
    }
    
    int soma2 = 0;
    
    for(; num2 < num; num2 ++){
        soma2 += vetor [num2];
    }
    
    
    if(soma1 > soma2){
        cout << "Jedi\n";
    } else if(soma2 > soma1){
        cout << "Sith\n";
    } else {
        cout << "Empate\n";
    }
}
