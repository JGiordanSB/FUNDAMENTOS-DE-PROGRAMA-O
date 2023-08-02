#include <iostream>
using namespace std;
int main(){
    int metro3 = 0, count = 0, valor = 7;
    cin >> metro3;
    
    for(int con = 1; con <= metro3; con ++){
        
        if(con >= 11 && con <= 30){
            valor += 1;
        }
        
        if(con >= 31 && con <= 100){
            valor += 2;
        }
        
        if(con >= 101){
            valor += 5;
        }
    }
    
    cout << "R$ " << valor << endl;
}
