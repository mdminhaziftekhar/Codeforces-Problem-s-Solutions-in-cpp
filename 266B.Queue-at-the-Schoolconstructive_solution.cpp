  
#include <iostream>
#include <string>
using namespace std;

string swap_action(string str){
    for(int i = 1; i<str.length(); i++){
            if(str.at(i-1) == 'B' && str.at(i) == 'G'){
                str.at(i) = 'B';
                str.at(i-1) = 'G';
                i++;
            }
        }
    return str;
}

int main(){

    int student, t;
    string s;

    cin >> student >> t;
    cin.ignore();

    getline(cin, s);

    for(; t > 0; t--){
        s = swap_action(s);
    }

    cout << s << endl;

    return 0;
}
