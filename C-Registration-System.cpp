#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> reg; 

int main(){

    int n;
    cin >> n;
    string s;

    while(n--){
        cin >> s;

        if(reg[s] == 0){
            cout << "OK" << endl;
        }
        else{
            cout << s << reg[s] << endl;
        }
        reg[s]++;
    }

    // map<string, int> :: iterator it;
    // for(it = reg.begin(); it != reg.end(); it++){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    return 0;
}
