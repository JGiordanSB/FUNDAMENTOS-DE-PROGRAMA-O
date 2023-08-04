#include <iostream>
#include <cmath>
using namespace std;

struct Ponto{
    float x;
    float y;
};

struct Circulo{
    Ponto centro;
    float raio;
};

void leitura(Ponto& ponto){
    cin >> ponto.x;
    cin >> ponto.y;
}

void leituraC(Circulo& main){
    cin >> main.centro.x;
    cin >> main.centro.y;
    cin >> main.raio;
}

bool dentro(Circulo main, Ponto ponto){
    float dist = sqrt( pow( (main.centro.x - ponto.x), 2) + pow( (main.centro.y - ponto.y), 2) );
    
    if(dist <= main.raio){
        return true;
    }
    
    return false;
}

int main(){
    int size = 0;
    cin >> size;
    
    Ponto pontos [size];
    
    for(Ponto& ponto : pontos){
        leitura(ponto);
    }
    
    Circulo main;
    
    leituraC(main);
    
    int count = 0;
    
    for(Ponto ponto : pontos){
        if( dentro(main, ponto) ){
            count ++;
        }
    }
    
    cout << count << endl;
    
}
