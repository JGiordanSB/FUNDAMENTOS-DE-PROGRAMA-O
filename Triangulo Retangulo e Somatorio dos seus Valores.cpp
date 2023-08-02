#include <iostream>
using namespace std;

void triret(int num, int& x){
    
    for(int i = 1; i <= num; i++){
        cout << i << " ";

        x += i;
    }
    
    cout << endl;
}

int main(){
    int n = 0;
    cin >> n;

    int x = 0;

    for(int i = 1; i <= n; i++){
        triret(i, x);
    } 

    cout << x << endl;
}    
