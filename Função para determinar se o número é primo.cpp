#include <iostream>
using namespace std;

int primo(int a){
    if(a == 1){
        return 0;
    }

        for(int i = a - 1; i >= 2; --i){
            if(a % i == 0){
                return 0;
            }
        }
        
        return 1;
}

int main(){
    int a = 0, b = 0, x;
    cin >> a >> b;
    
    while(a <= b){
        int x = primo(a);
        
        if(x == 1){
            cout << a << endl;
        }
        
        a ++;
    }
    
}
