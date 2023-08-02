#include <iostream>
using namespace std;
#include <cmath>
int main(){
    float a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    float delta = pow(b,2) - (4*a*c);
    cout.precision(2);
    
    if (delta > 0){
        float x1 = ((-1*b) + sqrt(delta)) / (2*a);
        float x2 = ((-1*b) - sqrt(delta)) / (2*a);
        cout << fixed << x1 << endl << x2 << endl;
    } else if (delta < 0){
        cout << "nao ha raiz real\n";
    } else {
        float x1 = ((-1*b) + sqrt(delta)) / (2*a);
        cout << fixed << x1 << endl;
    }
}    
