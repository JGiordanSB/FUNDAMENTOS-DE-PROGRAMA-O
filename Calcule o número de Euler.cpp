#include <iostream>
using namespace std;

int fatorial(int n){
    int fat = 1; 
    
    for(int i = 1; i <= n; i++){
        fat *= i;
    }
    
    return fat;
}

float euler(int n){
    float euler = 1;
    
    for(int i = 1; i <= n; i++){
        euler += 1.0/fatorial(i);
    }
    
    return euler;
}

int main(){
    int n = 0;
    cin >> n;
    cout.precision(6);
    cout << fixed;
    
    float num = euler(n);
    
    cout << num << endl;
}
