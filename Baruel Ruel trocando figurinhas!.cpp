#include <iostream>
using namespace std;

void repetida(int* figuras, int tam, int& x){
    for(int i = 0; i < tam-1; i++){
        if(figuras [i] == figuras [i+1]){
            cout << figuras [i] << " ";
        } else {
            x++;
        }
    }
}

void tfalta(int* testefalta, int totalf, int& y){
    for(int i = 1; i < totalf; i++){
       if(testefalta [i] == 0){
        cout << i << " ";
       } else {
        y++;
       }
    }
}


// int main() {

//     int a = 3;

//     int b = a;
//     b = 4;

//     int& c = a;
//     c = 5;
// }


int main(){
    int totalf = 0;
    cin >> totalf;
    totalf++;
    
    int testefalta [totalf];
    
    // for(int i = 0; i < totalf; i++){
    //     int& elem = testefalta[i];
    for ( int& elem : testefalta ) {
        elem = 0;
    }
    
    // for(int i = 0; i < totalf; i++){
    //     testefalta [i] = 0;
    // }
    
    int tam = 0;
    cin >> tam;
    
    int figuras [tam];
    
    for(int i = 0; i < tam; i++){
        cin >> figuras [i];
    }
    
    int x = 0;
    
    repetida(figuras, tam, x);
    
    if(x == tam-1){
        cout << "N";
    }
    
    cout << endl;

    for(int i = 0; i < tam; i++){
        for(int j = 1; j < totalf; j++){
            if(figuras [i] == j){
                testefalta [j]++;
                j = totalf;
            }
        }
    }

    int y = 0;
    
    tfalta(testefalta, totalf, y);

    if(y == totalf-1){
        cout << 'N';
    }

    cout << endl;
}
