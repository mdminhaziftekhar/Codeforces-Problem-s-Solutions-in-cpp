#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll M = 1e9 + 7;
const ll INF = 1e9;

#define makeItQuick        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define tc            ll t; cin>>t; while(t--)
#define RP(i,a,b)   for(ll i=a; i<b; i++)
#define REP(i,a)      for(ll i = 1; i<=a; i++)
#define pb            emplace_back
#define ld            long double
#define vl           vector<ll>
#define vi           vector<int>
#define vc           vector<char>
#define vs           vector<string>
#define vd           vector<double>        

// debug start ...........

#ifndef ONLINE_JUDGE
#define debug(x); cerr << #x << " "; _print(x); cerr << endl; 
#else
#define debug(x);
#endif

void _print(int a){cerr << a;}
void _print(ll a){cerr << a;}
void _print(char a){cerr << a;}
void _print(string a){cerr << a;}
void _print(double a){cerr << a;}

template<class T> 
void _print(vector<T> v1){
    cerr << "[ ";

    for(T i : v1){
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

template<class T>
void _print(set<T> s1){
    cerr << "[ ";
    for(T i : s1){
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

//Debug end ........................


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

//Bit differences of two numbers
int bitDifference(int a, int b){

    int num = a^b;

    int count = 0;

    while(num > 0){
        count++;

        num = num & (num-1);
    }

    return count;
}

//Fast exponentiation
ll powerf(ll a, ll n) {

    ll res = 1;

    while(n){

        if(n%2){

            res = (res * a) % M;

            n--;
        }
        else{

            a = (a*a) % M;

            n/=2;

        }
    }

    return res;

}

ll mod(ll x){
    return ((x%M + M)%M);
}

ll add(ll a, ll b){
    return mod(mod(a) + mod(b));
}

ll mul(ll a, ll b){
    return mod(mod(a) * mod(b));
}

const int N = 3e5+5;

//Solution
int main() {

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
    
    makeItQuick;

    vi xorVal(N, 0);
    
    RP(i, 1, N){
        xorVal[i] = xorVal[i-1] ^ i; //precompute all the xors
    }

    tc{
        int a, b;
        cin >> a >> b;

        int mnlen = a;
        int val = xorVal[a-1];
        if(val != b){
            int req = val^b;
            if(req==a) cout << mnlen+2 << endl;
            else cout << mnlen+1 << endl;
        }
        else cout << mnlen << endl;
        
    }

    return 0;
}
