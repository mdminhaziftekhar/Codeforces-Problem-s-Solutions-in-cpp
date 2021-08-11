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
    
    int n , m, cnt = 0;

    cin >> n >> m;

    if(n==m){
        cout << n << endl;

        return 0;
    }

    for(int i = n/2; i>=1; i--){

        int ans1 = i;
        int ans2 = n - (i*2);

        cnt = ans1+ans2;

        if(cnt%m == 0){

            cout << cnt << endl;

            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
