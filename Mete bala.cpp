#include <iostream>
using namespace std;
#include <cmath>

float pontos(float ax, float ay, float bx, float by){
    float ex = sqrt(pow((bx - ax),2) + pow((by - ay),2));
    
    return ex;
}

int main(){
    float ax = 0, ay = 0;
    cin >> ax >> ay;
    
    float bx = 0, by = 0;
    cin >> bx >> by;
    
    cout.precision(2);
    cout << fixed;
    
    float dispontos = pontos(ax, ay, bx, by);
    
    cout << dispontos << endl;
    
}
