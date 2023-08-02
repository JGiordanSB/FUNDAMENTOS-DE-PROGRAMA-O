#include <iostream>
using namespace std;

void copos(int num, int x, int esp){
    
    for(int i = 1; i <= esp; i++){
        cout << " ";
    }
    
    for(int i = 1; i <= x; i++){
        cout << num << " ";
    }
    
    cout << endl;
}

int main(){
    int num = 0;
    cin >> num;
    
    for(int i = 1, j = num; i <= num; i++, j--){
        copos(num, i, j);
    }
}
