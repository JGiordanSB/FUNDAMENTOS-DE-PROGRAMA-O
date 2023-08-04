#include <iostream>
using namespace std;

void ordc(int* vetor, int tam){
    int aux;
    int i = 0;
    
    while(i < tam){
        for(int j = 0; j < tam-1; j++){
            if(vetor [j] > vetor [j+1]){
                aux = vetor [j];
                vetor [j] = vetor [j+1];
                vetor [j+1] = aux;
            }
        }
        
        i++;
    }
}

int main(){
    int num = 0;
    cin >> num;
    
    int vetor [8];
    
    int digito = 0;
    int i = 0;
    
    while(num != 0){
        digito = num % 10;
        vetor [i] = digito;
        num /= 10;
        i++;
    }
    
    int pmin;
    
    ordc(vetor, i);
    
    for(int x = 0; x < i; x++){
        cout << vetor [x] << " ";
    }
    
    cout << endl;
}






