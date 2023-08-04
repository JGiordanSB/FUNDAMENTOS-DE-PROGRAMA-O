#include <iostream>
#include <cmath>
using namespace std;

struct Ponto{
    float x;
    float y;
};

void leitura(Ponto& ponto){
    cin >> ponto.x;
    cin >> ponto.y;
}

void distancia(Ponto* ponto){
    float dist = sqrt( pow( (ponto[0].x - ponto[1].x), 2) + pow( (ponto[0].y - ponto[1].y), 2) );
    
    cout.precision(4);
    
    cout << fixed << dist << endl;
}

int main(){
    Ponto pontos [2];
    
    for(Ponto& ponto : pontos){
        leitura(ponto);
    }
    
    distancia(pontos);
}
