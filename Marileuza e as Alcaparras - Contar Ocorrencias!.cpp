#include <iostream>
#include <string>
using namespace std;

int main(){
    string frase;
    getline(cin, frase);
    
    char letra;
    cin >> letra;
    
    int count = 0;
    
    for(char elem : frase){
        if(elem == letra){
            count ++;
        }
    }
    
    cout << count << endl;
}
