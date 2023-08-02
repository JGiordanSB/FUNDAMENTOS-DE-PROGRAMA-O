#include <iostream>
using namespace std;
int main(){
    int dia = 0, hora = 0, min = 0;
    cin >> dia >> hora >> min;

    if (dia == 7){
        if (hora >= 8 && hora <= 11 && min >= 0 && min <= 59){
            cout << "SIM";
        } else {
            cout << "NAO";
        }
    }

    else if (((hora >= 8 && hora <= 11) || (hora >= 14 && hora <= 17)) && min >= 0 && min <= 59){
        if (dia == 2 || dia == 3 || dia == 4 || dia == 5 || dia == 6){
            cout << "SIM";   
        } else {
            cout << "NAO";
        }
    }
    
    else {
        cout << "NAO";
    }
}
