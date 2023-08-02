#include <iostream>
using namespace std;
int main(){
    int ruf1 {}, ruf2 {}, ruf3 {};
    cin >> ruf1 >> ruf2 >> ruf3; 
    //int sub1 = ruf1 - ruf2;
    //int sub2 = ruf1 - ruf3;
    
    //ruf1
    if (ruf1 > ruf2 && ruf1 > ruf3){
        cout << "G ";
    } else if (ruf1 < ruf2 && ruf1 < ruf3){
        cout << "P ";
    } else {
        cout << "M ";
    }

    //ruf2
    if (ruf2 > ruf1 && ruf2 > ruf3){
        cout << "G ";
    } else if (ruf2 < ruf1 && ruf2 < ruf3){
        cout << "P ";
    } else {
        cout << "M ";
    }

    //ruf3
    if (ruf3 > ruf1 && ruf3 > ruf2){
        cout << "G";
    } else if (ruf3 < ruf1 && ruf3 < ruf2){
        cout << "P";
    } else {
        cout << "M";
    }
}
