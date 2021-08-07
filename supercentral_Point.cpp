#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll M = 1e9 + 7;
const ll INF = 1e9;

//***** Generates Prime till 5 million numbers *****
// bool is_prime[90000001];
// vector<ll> primes;
// void sieve(){
//     ll maxN = 90000001;

//     for(ll i = 1; i<=maxN; i++) is_prime[i] = 1;

//     is_prime[0] = is_prime[1] = 0;

//     for(ll i = 2; i*i <= maxN; i++){
//         if(is_prime[i]){
//             for(ll j = i*i; j <= maxN; j+=i) is_prime[j] = 0;
//         }
//     }
    
//     for(ll i = 1; i<=maxN; i++){
//         if(is_prime[i]){
//             primes.emplace_back(i);
//         }
//     }
// }

//..... simple Implimentation of sieve .....
// int is_prime[1000001];
// void sieve(){
//     int maxN = 1000000;

//     for(int i = 1; i<=maxN; i++) is_prime[i] = 1;

//     is_prime[0] = is_prime[1] = 0;

//     for(int i = 2; (ll)i*i <= maxN; i++){
//         if(is_prime[i]){
//             for(int j = i*i; j <= maxN; j+=i) is_prime[j] = 0;
//         }
//     }

// }

ll mod(ll x){
    return ((x%M + M)%M);
}

ll add(ll a, ll b){
    return mod(mod(a) + mod(b));
}

ll mul(ll a, ll b){
    return mod(mod(a) * mod(b));
}

//Solution
void solve() {

    
}

//Main
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;

    vector<int> a;

    for(int i = 0; i<n; i++){
        int k, b;
        cin >> k >> b;

        a.emplace_back(k);

        a.emplace_back(b);
    }

    int count = 0;

    for(int i = 1; i<a.size(); i+=2){
        
        int x = a[i-1];
        int y = a[i];

        //cout << "X : " << x << " Y : " << y << endl;

        int right = 0, left = 0, low = 0, up = 0;

        for(int j = 1; j<a.size(); j+=2){
            
            int x1 = a[j-1];
            int y1 = a[j];

            if(i == j) continue;

            //cout << "X1 : " << x1 << " Y1 : " << y1 << endl;

            if(x1 > x && y1 == y) right++;

            if(x1 < x && y1 == y) left++;

            if(x1 == x && y1 < y) low++;

            if(x1 == x && y1 > y) up++;

        }

        if(right >= 1 && left >= 1 && low >= 1 && up >= 1){
            count++;
            
        } 
    }

    cout << count << endl;

    return 0;
}
