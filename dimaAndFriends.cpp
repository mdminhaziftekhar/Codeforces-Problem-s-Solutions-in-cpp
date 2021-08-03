#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll M = 1e9 + 7;
const ll INF = 1e9;

ll mod(ll x){
    
    return ((x%M + M)%M);
}

ll add(ll a, ll b){
    return mod(mod(a) + mod(b));
}

ll mul(ll a, ll b){
    return mod(mod(a) * mod(b));
}

void solve() {

   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, ans(0), f(0);
    cin >> n;

    for(int i = 0; i<n; i++){
        int a;
        cin >> a;

        f += a;
    }

    for(int i = 1; i<=5; i++){

        if((f + i) % (n+1) != 1){
            ans += 1;
        }

    }

    cout << ans << endl;
    

    return 0;
}
