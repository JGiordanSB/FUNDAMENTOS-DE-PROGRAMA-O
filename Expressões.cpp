#include <iostream>
using namespace std;

int fatorial(int num){
    int fat = 1;
    for(int i = 1; i <= num; i ++){
        fat *= i;
    }
    
    return fat;
}

float poten(float base, int expo){
    int pot = 1;
    
    for(int i = 1; i <= expo; i ++){
        pot *= base;
    }
    
    return pot;
}

int main(){
    
    cout.precision(2);
    cout << fixed;
    
    int e1 = fatorial(5) - fatorial(4);
    
    float e2 = (1.0/fatorial(3)) + fatorial(4);
    
    int e3 = fatorial(fatorial(4) - 21);
    
    float e4 = poten(8,3) + poten(5,4) / poten(3,5);
    
    int e5 = poten(fatorial(3),fatorial(2) + 1) + fatorial(poten(2,2));
    
    cout << e1 << endl << e2 << endl << e3 << endl << e4 << endl << e5 << endl;
}
