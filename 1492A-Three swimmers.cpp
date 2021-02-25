#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void swim(){
    ll a, b, c, p;

    cin >> p >> a >> b >> c;

    ll A, B, C;

    A = a - p % a;
    if(A == a){
        A = 0;
    }

    B = b - p % b;
    if(B == b){
        B = 0;
    }

    C = c - p % c;
    if(C == c){
        C = 0;
    }

    ll ans = min(A, B);

    ans = min(ans, C);

    cout << ans << endl;
}

int main(){

    int t;

    cin >> t;

    while(t){
        t--;
        swim();
    }

    return 0;
}
