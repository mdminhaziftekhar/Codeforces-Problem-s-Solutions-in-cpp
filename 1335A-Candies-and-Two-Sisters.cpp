#include <iostream>

using namespace std;

typedef long long ll;

void test(){
    ll n;
    cin >> n;

    if(n <= 2){
        cout << 0 << endl;
    }
    else if((n & 1) != 0){
        ll ans = n >> 1;
        cout << ans << endl;
    }
    else if((n & 1) == 0){
        ll ans = n >> 1;
        cout << ans-1 << endl;
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
