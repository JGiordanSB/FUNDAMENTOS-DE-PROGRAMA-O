#include <iostream>
using namespace std;
int main(){
    int num = 0, numC = 0, resto = 0, cont = 0;
    cin >> num >> numC;
    
    while(numC > 0){
       resto = numC % 10;
       numC /= 10;
       //cout << numC << "  " << i << endl;
       if(resto == num){
           cont ++;
       }
    }
    
    cout << cont << endl;
}
