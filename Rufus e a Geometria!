#include <iostream>
using namespace std;
int main(){
    int lad1 {}, lad2 {}, lad3 {};
    cin >> lad1 >> lad2 >> lad3;
    int soma1 = lad1 + lad2;
    int soma2 = lad1 + lad3;
    int soma3 = lad2 + lad3;
    
    if (soma3 > lad1 && soma2 > lad2 && soma1 > lad3 ){
        if (lad1 == lad2 && lad2 == lad3){
            cout << "equilatero\n";
        } else if (lad1 == lad2 || lad1 == lad3 || lad2 == lad3){
            cout << "isosceles\n";
        } else {
            cout << "escaleno\n";
        }
    } else {
        cout << "invalido\n";
    }
}
