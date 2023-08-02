#include <iostream>
using namespace std;

int raiz(int n){
     if(n == 0){
         return 0;
     }
     
     int num = 0;
     int resultado = 0;
     
     while(n != resultado){
         num ++;
         
         resultado = num * num;
         
     }
     
     return num;
}

int main(){
    int n = 0;
    cin >> n;
    
    int resultado = raiz(n);
    cout << resultado << endl;
}
