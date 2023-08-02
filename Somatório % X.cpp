#include <iostream>
using namespace std;
int main (){
    int a = 0, b = 0, x = 0, soma = 0;
    cin >> a >> b >> x;
    
    for (int i = a; i <= b; i++){
        if (i % 3 == 0 && i % x == 0 && i % 2 == 0){
            soma += i;
        }
    }
    
    cout << soma << endl;
}
