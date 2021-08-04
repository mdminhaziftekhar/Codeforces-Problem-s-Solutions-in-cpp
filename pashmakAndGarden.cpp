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
    
    ll a, x1, x2, x3, x4, y1, y2, y3, y4;
 
    cin >> x1 >> y1 >> x2 >> y2;
 
    if(x1 == x2){
 
        a = abs(y2 - y1);
 
        x3 = x1 + a;
 
        x4 = x2 + a;
 
        y3 = y1;
 
        y4 = y2;
 
    }
 
    else if(y1 == y2){
 
        a = abs(x2 - x1);
 
        x3 = x1;
 
        x4 = x2;
 
        y3 = y1 + a;
 
        y4 = y2 + a;
 
    }
 
    else if(abs(x2 - x1) == abs(y2 - y1)){
 
        x3 = x1;
 
        x4 = x2;
 
        y3 = y2;
 
        y4 = y1;
 
    }
 
    else{
 
        cout << -1 << endl;
 
        return 0;
 
    }
 
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
 
    return 0;
 
}
