#include <iostream>
#include <string>

using namespace std;

int main(){

    string s,t,ns;

    getline(cin, s);
    getline(cin , t);

    int j = s.length() - 1;

    ns = s;

    for(int i = 0; i < s.length(); i++){
        ns.at(j) = s.at(i);
        j--;
    }

    if(ns == t){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
© 2021 GitHub, Inc.
