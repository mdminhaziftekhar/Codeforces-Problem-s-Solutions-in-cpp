#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

bool prime[50+1];

vector<int> p;

void sieve(){

    for(int i = 0; i<=50; i++) prime[i] = true;

    for(int i = 2; i*i <= 50; i++){
        if(prime[i] == true){
            for(int j = i*i; j<=50; j+=i){
                prime[j] = false;
            }
        }
    }

    for(int i = 2; i<=50; i++){
        if(prime[i]){
            p.emplace_back(i);
            //cout << i << " ";
        }
    }
}

int lookforn(int n){
    int i = 0;

    for(i = 0; i<p.size(); i++){
        if(p[i] == n) break;
    }

    return i;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    sieve();
    
    int n, m;
    cin >> n >> m;

    int loc = lookforn(n);

    if(p[loc+1] == m) cout << "YES" << endl;

    else cout << "NO" << endl;


}
