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
    
    int n, m, max_index = 0;
    double max = 0;

    cin >> n >> m;

    vector<int> a;

    for(int i = 0; i<n; i++){
        int j;

        cin >> j;

        a.emplace_back(j);
    }

    for(int i = 0; i<a.size(); i++){
        if(ceil((double)a[i]/(double)m) >= max){
            max = ceil((double)a[i]/(double)m);

            max_index = i+1;
        }
    }

    cout << max_index << endl;

    return 0;
}
