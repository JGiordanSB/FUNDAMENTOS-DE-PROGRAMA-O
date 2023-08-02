#include <iostream>
using namespace std;
int main (){
    double nota1 = 0, nota2 = 0, nota3 = 0, notat = 0;
    cin >> nota1 >> nota2 >> nota3 >> notat;
    cout.precision(1);
    double total = nota1 + nota2 + nota3 + notat;
    double menor = nota1;
    
    if (menor > nota2){
       menor = nota2;
       total -= menor;
       total /= 3;
        if (total >= 7){
        cout << fixed << "Aprovado com " << total << endl;
      } else {
        cout << fixed << "Final com " << total << endl;
      }
    }
    else if (menor > nota3){
        menor = nota3;
        total -= menor;
        total /= 3;
        if (total >= 7){
        cout << fixed << "Aprovado com " << total << endl;
      } else {
        cout << fixed << "Final com " << total << endl;
      }
    } 
    else {
        total -= menor;
        total /= 3;
        if (total >= 7){
        cout << fixed << "Aprovado com " << total << endl;
      } else {
        cout << fixed << "Final com " << total << endl;
      }
    }
}
