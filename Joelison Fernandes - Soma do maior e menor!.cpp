#include <iostream>
using namespace std;
int main(){
    float menor = 999, maior = 0, num = 0;
    
    for(int i = 1; i <= 5; i++){
        cin >> num;
        
        if(num < menor){
            menor = num;
        }
        
        if(num > maior){
            maior = num;
        }
    }
    
    cout << maior + menor << endl;
}
