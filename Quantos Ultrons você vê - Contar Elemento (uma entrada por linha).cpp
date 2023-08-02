#include <iostream>
using namespace std;
int main(){
    int ini = 0, num = 0, resultado = 0;
    cin >> ini >> num;
    
    for (int i = 1; i <= num; i++){
        int tipos = 0;
        cin >> tipos;
        if (tipos == ini){
            resultado ++;
        }
    }
    
    cout << resultado << endl;
}
