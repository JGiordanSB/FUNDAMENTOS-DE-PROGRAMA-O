#include <iostream>
using namespace std;
int main (){
    float num = 0, nota = 0;
    cin >> num;
    cout.precision(2);
    
    for (int i = 1; i <= num; i ++){
        float soma = 0;
        cin >> soma;
        nota += soma;
        if (i == num){
            float media = nota / num;
            cout << fixed << media << endl;
        }
    }
}
