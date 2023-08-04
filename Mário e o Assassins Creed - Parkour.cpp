#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n = 0;
    cin >> n;
    
    int vetor [n];
    
    for(int i = 0; i < n; i++){
        cin >> vetor [i];
    }
    
    int nivel = 0;
    int count = 0;
    
    for(int i = 0; i < n - 1; i++){
        nivel = abs(vetor [i] - vetor [i+1]);
        
        if(nivel >= 2){
            count ++;
        }
    }
    
    cout << count << endl;
}
