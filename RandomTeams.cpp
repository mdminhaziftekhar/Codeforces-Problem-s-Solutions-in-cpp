#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll M = 1e9 + 7;
const ll INF = 1e9;

#define minhaz        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define tc            ll t; cin>>t; while(t--)
#define loop(i,a,b)   for(int i=a; i<b; i++)
#define REP(i,a)      for(int i = 1; i<=a; i++)
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

//*** PrimeFactorization using Sieve ***
// int spf[MAX_N];

// void primeFactSieve(){

//     spf[1] = 1;

//     for(int i = 2; i<MAX_N; i++) spf[i] = i;

//     for(int i = 4; i<MAX_N; i+=2) spf[i] = 2;

//     for(int i = 3; i*i<MAX_N; i++){

//         if(spf[i] == i){
//             for(int j = i*i; j<MAX_N; j+=i){
//                 if(spf[j] == j) spf[j] = i;
//             }
//         }
//     }
// }
// vector<int> getFactorization(int x){
//     vector<int> ret;

//     while(x!=1){
//         ret.pb(spf[x]);

//         x = x/spf[x];
//     }

//     return ret;
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
    
    minhaz;
    
    ll n , k;

    cin >> n >> k;

    if(k == 1){
        ll ans = (n * (n-1)) / 2;

        cout << ans << " " << ans << endl;

        return 0;
    }

    ll maxx = ((n-k+1) * (n-k))/2; //maxx means put all in one and rest in others
                                   // minn means evenly distribute it
    ll other1 = n/k;

    ll other2 = n%k;

    ll ans1 = (other1 * (other1-1)) / 2;

    ll ans2 = (other1 * (other1+1)) / 2;

    ll minn = (ans1 * (k-other2)) + (ans2 * other2);

    cout << minn << " " << maxx << endl;

    return 0;
}
