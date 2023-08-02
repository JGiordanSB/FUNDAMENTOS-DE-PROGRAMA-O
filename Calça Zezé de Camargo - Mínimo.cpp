#include <iostream>
using namespace std;
int main(){
    int menor = 30;
    
    for (int i = 1; i <= 5; i ++){
        int numc = 0;
        cin >> numc;
        if (menor > numc){
            menor = numc;
        }
    }
    
    cout << menor << endl;
}
