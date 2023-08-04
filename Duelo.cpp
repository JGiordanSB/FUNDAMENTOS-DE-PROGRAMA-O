#include <iostream>
using namespace std;

struct Personagem{
    float vida;
    float ataque;
};

void leitura(Personagem& boneco){
    cin >> boneco.vida;
    cin >> boneco.ataque;
}

void duelo(Personagem& boneco1, Personagem& boneco2){
    
    while(true){
        boneco2.vida -= boneco1.ataque;
        boneco1.vida -= boneco2.ataque;
        
        if(boneco1.vida <= 0 || boneco2.vida <= 0){
            break;
        }
    }
}

int main(){
    Personagem boneco1;
    Personagem boneco2;
    
    leitura(boneco1);
    leitura(boneco2);
    
    duelo(boneco1, boneco2);
    
    if(boneco1.vida <= 0 && boneco2.vida <= 0){
        cout << "Empate" << endl;
    } else if(boneco1.vida <= 0){
        cout << "Personagem 2" << endl;
    } else {
        cout << "Personagem 1" << endl;
    }
}
