#include <iostream>
using namespace std;
int main(){
    int num1 {}, num2 {}, soma = {}, i {};
    cin >> num1 >> num2;
    i = num1;
    while(i <= num2){
        soma += i;
        i ++;
    }
    
    cout << soma << endl;
    
}
