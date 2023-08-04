#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    
    int vetor [n];
    
    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }
    
    n--;
    
    for(int i = 0; n >= i; n--){
        cout << vetor[n];
        
        if(n != 0){
            cout << " ";
        } else {
            cout << endl;
        }
    }
}
