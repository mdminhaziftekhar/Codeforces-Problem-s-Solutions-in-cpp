#include <iostream>
#include <string>

using namespace std;

int main(){

    string a, b;

    cin >> a >> b;

    string c = a;

    for(int i = 0; i < a.length(); i++){
        if(a[i] == b[i]){
            c[i] = '0';
        }
        else{
            c[i] = '1';
        }
    }

    cout << c << endl;

    return 0;
}
