#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n , k, l, c, d, p, nl, np;

    vector<int> a(3);

    for(int i = 0; i<a.size(); i++) a[i] = 0;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    a[0] = (k * l) / nl;

    a[1] = c * d;

    a[2] = (p / np);

    sort(a.begin(), a.end());

    cout << a[0]/n << endl;
    
}
