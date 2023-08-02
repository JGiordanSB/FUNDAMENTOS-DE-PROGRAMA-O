#include <iostream>
using namespace std;
int main(){
    int coi = 0, num = 0, res = 0;
    cin >> coi >> num;
    
    for (int i = 1; i <= num; i++){
        int tcal = 0;
        cin >> tcal;
        if (tcal > coi){
            res ++;
        }
    }
    
    cout << res << endl; 
}
