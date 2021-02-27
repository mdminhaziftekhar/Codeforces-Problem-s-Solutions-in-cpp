#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    int count = 0;

    getline(cin, s);

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            count++;
            break;
        }
    }
    if(count == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;
}
