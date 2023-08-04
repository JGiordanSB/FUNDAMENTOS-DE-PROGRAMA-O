#include <iostream>
using namespace std;

int main(){
    string frase;
    getline(cin, frase);

    int size = frase.size();

    for(int i = size - 1; i >= 0; i--){
        cout << frase [i];
    }
}
