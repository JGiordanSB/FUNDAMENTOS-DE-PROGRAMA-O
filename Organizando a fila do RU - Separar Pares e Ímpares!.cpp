#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    
    int vetor [n];
    
    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }
    
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 != 0){
            cout << vetor[i] << " ";
        }
    }
    
    cout << endl;
    
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            cout << vetor[i] << " ";
        }
    }
}
