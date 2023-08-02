#include <iostream>
using namespace std;

float converte_para_celsius(float temp){
    float cels = ((temp - 32.0) * 5.0) / 9.0;
    
    return cels;
}

int main(){
    float fahr = 0;
    cin >> fahr;
    
    cout.precision(6);
    cout << fixed;
    
    float convert = converte_para_celsius(fahr);
    cout << convert << endl;
}
