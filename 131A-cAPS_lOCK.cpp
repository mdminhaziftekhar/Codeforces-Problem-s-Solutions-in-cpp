#include <iostream>
#include <string>

using namespace std;

int only_upper(string s){
    for(int i = 0; i<s.length(); i++){
        if(islower(s[i])){
            return 0;
        }
    }
    return 1;
}

int firstlil(string s){
    int ct = 0;
    if(s.length() > 1 && islower(s[0])){
        for(int i = 1; i<s.length(); i++){
            if(isupper(s[i])){
                ct = 1;
            }
            else{
                ct = 0;
                break;
            }
        }
    }
    else if(s.length()==1 && islower(s[0])){
        ct = 1;
    }
    else{
        ct = 0;
    }

    return ct;
}

int main(){

    string s;
    getline(cin, s);

    if(only_upper(s)){
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else if(firstlil(s)){
        s[0] = toupper(s[0]);
        if(s.length() > 1){
            for(int i = 1; i<s.length(); i++){
                s[i] = tolower(s[i]);
            }
        }
        cout << s << endl;
    }
    else{
        cout << s << endl;
    }

    return 0;
}
