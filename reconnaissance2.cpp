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
    
    int n, min = 1200;

    cin >> n;

    vector<int> a(n);
    vector<int> m;

    m.pb(0);
    m.emplace_back(0);

    for(int &i : a) cin >> i;

    // for(int i : a) cout << i << " ";

    // cout << endl;

    loop(i,0,a.size()-1){

        // cout << abs(a[i+1] - a[i]) << endl;
        // cout << "Min : " << min << endl;

        if(abs(a[i+1] - a[i]) < min){

            min = abs(a[i+1] - a[i]);

            m[0] = i+1;

            m[1] = i+2;

            // cout <<"min : " << min << endl;

            // cout << "M0 " << m[0] << " M1 " << m[1] << endl;

        }

    }

    if(abs(a[a.size()-1] - a[0]) < min){
        m[0] = a.size();

        m[1] = 1;
    }

    cout << m[0] << " " << m[1] << endl;

    return 0;
}
