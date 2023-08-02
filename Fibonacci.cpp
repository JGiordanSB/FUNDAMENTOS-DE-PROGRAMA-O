#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cin >> num;

    int a = 1;
    int b = 1;
    int fib = 1;

    if(num == 0 || num == 1){
        cout << fib << endl;
    } 
    
    else {
        for(int i = 1; i < num; i++){

        fib = a + b;
        b = a;
        a = fib;
    }

    cout << fib << endl;
    }
}   
