#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int n = 0;
    cin >> n;
    
    float vetor [n];
    
    cout.precision(2);
    cout << fixed;
    
    float media = 0;
    
    for(int i = 0; i < n; i ++){
        cin >> vetor [i];
        
        media += vetor [i];
    }
    
    media /= n;
    cout << media << endl;
    
    for(int i = 0; i < n; i++){
        
        if(vetor [i] > media){
            cout << "G ";
        }
        
        else if(abs(vetor [i] - media) < 0.000001){
            cout << "M ";
        }
        
        else if(vetor[i] < media){
            cout << "P ";
        }
    }
}



