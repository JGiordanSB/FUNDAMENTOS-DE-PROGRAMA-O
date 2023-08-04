#include <iostream>
#include <cmath>
using namespace std;


int busca(int* vetor, int num, int grito){
    
    for(int i = 0; i < num; i++){
        if(abs(vetor [i]) == grito){
            return i;
        }
    }
    
    return -1;
}

void jogo(int* vetor, int num, int inV){
    if(inV == 0){
        vetor [inV+1] = -vetor [inV+1];
    } else if(inV == num-1){
        vetor [inV-1] = -vetor [inV-1];
    } else {
        vetor [inV+1] = -vetor [inV+1];
        vetor [inV-1] = -vetor [inV-1];
    }
}



int main (){
    int num = 0, numgrito = 0;
    cin >> num >> numgrito;
    
    int vetor [num];
    
    for(int i = 0; i < num; i++){
        cin >> vetor [i];
    }
    
    int grito;
    
    for(int i = 0; i < numgrito; i++){
        cin >> grito;
        int inV = busca(vetor, num, grito);
        jogo(vetor, num, inV);
    }
    
    for(int i = 0; i < num; i++){
        cout << vetor [i] << " ";
    }
    
    cout << endl;
}
