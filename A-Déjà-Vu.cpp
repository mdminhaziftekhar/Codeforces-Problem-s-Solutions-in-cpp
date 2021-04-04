#include <iostream>
#include <string>

using namespace std;

int palin(string s){
    int i, j;
    for(i = 0,j = s.length()-1; i<j; ){
        if(s.at(i) != s.at(j)){
            return 0;
        }
        else{
            i++;
            j--;
        }
    }
    return 1;

}

int if_a(string s){
    for(int i = 0; i<s.length(); i++){
        if(s[i] != 'a'){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    cin >> n;
    while(n--){
    string st;
    cin >> st;

    if(if_a(st)){
        cout << "NO" << endl;
    }
    else{
        string s2 = 'a'+st;
        if(palin(s2)){
            string s3 = st + 'a';
            if(palin(s3)){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl << s3 << endl;
            }
        }
        else{
            cout << "YES\n" << s2 << endl;
        }
    }

    }
    
    return 0;
}
