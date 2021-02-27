#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int count = 0, x = 0;
    string s;

    getline(cin, s);

    //Following loop is to identify if the number is lucky or not
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '4' || s.at(i) == '7'){
            count = 0;
        }
        else{
            count = 1;
            break;
        }
    }
    //following for almost lucky or not lucky
    if(count == 0){
        cout << "YES" << endl;
    }
    else{
        stringstream c(s);

        c >> x;

        if(x % 4 == 0 || x % 7 == 0 || x % 47 == 0 || x % 44 == 0 || x % 74 == 0 || x % 77 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
