#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main(){

    ll n, count = 0;
    cin >> n;

    string str;

    cin >> str;

    
    for(int i = 0; i<n; i+=2){
        if(str[i] == str[i+1]){
            if(str[i+1] == 'a') str[i+1] = 'b';
            else str[i+1] = 'a';
            count++;
        }
    }    
    
    cout << count << endl << str << endl;

    return 0;
}
