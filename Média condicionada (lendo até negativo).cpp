#include <iostream>
using namespace std;
int main(){
    int soma = 0, n = 0;
    
    for(int i = 1; i > 0; i ++){
        cin >> i;
        if(i > 0 && i % 2 >= 1){
            n ++;
            soma += i;
        }
    }
    
    cout << soma / n << endl;
}
