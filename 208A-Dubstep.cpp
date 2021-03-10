#include <iostream>
#include <string>
using namespace std;

void test(string s){
    string s2;
    for(int i = 0; i<s.length(); ){
        if(i+2 < s.length()){
            if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
                        i = i+3;
                        //s2 += " ";
                        continue;
                }
            }
            if(i < s.length()){
                s2 += s[i];
                if(i+3 < s.length()){
                    if(s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B'){
                        s2 += " ";
                    }
                }
                i++;
            }
        }
    
    cout << s2 << endl;
}

int main(){

    string s;

    cin >> s;

    test(s);

    return 0;
}
