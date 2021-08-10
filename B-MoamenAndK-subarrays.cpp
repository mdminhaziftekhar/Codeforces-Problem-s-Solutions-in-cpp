#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll M = 1e9 + 7;
const ll INF = 1e9;

#define tc            ll t; cin>>t; while(t--)
#define loop(i,a,b)   for(int i=a; i<b; i++)
#define pb            emplace_back
#define ld            long double


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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    tc{

        ll n , k, cnt = 1;

        cin >> n >> k;

        ll ar[n+5];

        map<ll, ll> br;

        for(int i = 1; i<=n; i++){
            cin >> ar[i];

            br[ar[i]] = i;
        }

        sort(ar+1, ar+n+1);

        for(int i = 1; i<n; i++){

            if(br[ar[i+1]] - br[ar[i]] == 1) continue;

            else cnt++;
        }

        if(cnt > k) cout << "NO" << endl;

        else cout << "YES" << endl;

    }

    return 0;
}
