#include <iostream>
using namespace std;

string substring(string palavra, int start, int tam){
    string res;

    if(!(start >= 0 && start < palavra.size())){
        return "nao";
    } else {
        for(int i = start; i < start+tam && i < palavra.size(); i++){
            res += palavra [i];
        }
    }
    
    return res;
}

int main(){
    string palavras;
    getline(cin, palavras);

    int start = 0, end = 0;
    cin >> start >> end;

    string res = substring(palavras, start, end);

    cout << res << endl;
}
