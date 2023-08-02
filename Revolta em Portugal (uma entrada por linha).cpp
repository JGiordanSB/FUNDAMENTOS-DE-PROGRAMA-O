#include <iostream>
using namespace std;
int main(){
    int num = 0, soma = 0, somaP = 0, somaI = 0;
    cin >> num;
    
    for(int i = 1; i <= num; i++ ){
        cin >> soma;
        
        if(soma % 2 ==  0){
            somaP += soma;
        }
        
        else{
            somaI += soma;
        }
    }
    
    if(somaP == somaI ){
        cout << "empate\n";
    } else if(somaP > somaI){
        cout << "rebeldes\n";
    } else {
        cout << "soldados\n";
    }
}
