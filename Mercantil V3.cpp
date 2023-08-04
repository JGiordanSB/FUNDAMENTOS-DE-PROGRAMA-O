#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;

    float qproduto [n];

    for(int i = 0; i < n; i++){
        cin >> qproduto [i];
    }

    float chute [n];

    for(int i = 0; i < n; i++){
        cin >> chute [i];
    }

    char escolha2 [n];

    for(int i = 0; i < n; i++){
        cin >> escolha2 [i];
    }

    int count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++){

        if(qproduto [i] == chute [i]){
            count1  ++;
        } else if(qproduto [i] < chute [i] && escolha2 [i] == 'm'){
            count2 ++;
        } else if(qproduto [i] > chute [i] && escolha2 [i] == 'M'){
            count2 ++;
        } else if(qproduto [i] < chute [i] && escolha2 [i] == 'M'){
            count1 ++;
        } else {
            count1 ++;
        }
    }

    if(count1 > count2){
        cout << "primeiro" << endl;
    } else if(count1 == count2){
        cout << "empate" << endl;
    } else {
        cout  << "segundo" << endl;
    }
}
