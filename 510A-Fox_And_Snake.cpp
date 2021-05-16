#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int line, chars;

    cin >> line >> chars;

    int a = line / 2;

    vector<string> v;


    for(int i = 0; i<a; i++){
        string s;
        if(i % 2 == 0){
            for(int j = 0; j<chars-1; j++){
                s += '.';
            }
            s += '#';
        }
        else{
            s += '#';
            for(int j = 0; j<chars-1; j++){
                s += '.';
            }
        }
        v.push_back(s);
    }
    string s;
    for(int i = 0; i<chars; i++){
        s += '#';
    }

    int j = 0;
    for(int i = 0; i<line; i++){
        if(i % 2 == 0){
            cout << s << endl;
        }
        else{
            cout << v[j] << endl;
            j++;
        }
    }
}
