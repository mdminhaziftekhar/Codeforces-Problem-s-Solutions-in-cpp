#include <iostream>

using namespace std;

typedef long long ll;

void test(){

    ll a , b;
    cin >> a >> b;

    if(a % b == 0){
        cout << 0 << endl;
    }
    else{
        a = a % b;
        b = b - a;
        cout << b << endl;
    }

}

int main(){

    int t; 
    cin >> t;

    while(t--){
        test();
    }

    return 0;
}
