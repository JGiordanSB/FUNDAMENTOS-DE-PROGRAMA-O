#include <iostream>
using namespace std;
int main(){
    int ces = 0, f1 = 0, f2 = 0, f3 = 0;
    cin >> ces >> f1 >> f2 >> f3;
    int divi = (f1 + f2 + f3) / ces;
    int res = (f1 + f2 + f3) % ces;
    
    if(res == 0){
       cout << divi << endl; 
    } else {
        cout << divi + 1 << endl;
    }
    
}
