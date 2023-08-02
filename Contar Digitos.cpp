#include <iostream>
using namespace std;

int contad(int n){
    
    int count = 0;
    int digitos = 0;
    
    while(n > 0){
        count ++;
        
        digitos = n % 10; 
        n /= 10;
    }
    
    return count;
}

int main(){
    int n = 0;
    cin >> n;
    
    int resultado = contad(n);
    cout << resultado << endl;
}
