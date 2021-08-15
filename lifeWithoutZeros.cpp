#include <bits/stdc++.h>
#include <sstream>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll M = 1e9 + 7;
const ll INF = 1e9;

#define makeItQuick        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define tc            ll t; cin>>t; while(t--)
#define fr(i,a,b)   for(ll i=a; i<b; i++)
#define REP(i,a)      for(ll i = 1; i<=a; i++)
#define pb            emplace_back
#define ld            long double
#define vec           vector<ll> 


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


//Solution
int main() {
    
    makeItQuick;

    ll a, b, c, c2;

    cin >> a >> b;

    string a1, b1, c1="",c11 = "", a2="", b2="";

    c = a + b;

    //store c in a string
    c1 = to_string(c);

    //remove zeros from c and store in c11
    fr(i, 0, c1.length()){
        if(c1[i]=='0') continue;

        else c11.push_back(c1[i]);
    }

    //store c11 in c2 variable
    stringstream c22(c11);

    c22 >> c;

    //cout << c << endl;

    //store a and b in string
    a1 = to_string(a);
    b1 = to_string(b);

    //remove zero from a
    fr(i, 0, a1.length()){
        if(a1[i] == '0'){
            continue;
        }else{
            a2.push_back(a1[i]);
        }
    }

    //remove zero from b
    fr(i, 0, b1.length()){
        if(b1[i] == '0') continue;

        else{
            b2.push_back(b1[i]);
        }
    }

    stringstream aa(a2);

    stringstream bb(b2);

    a = 0;
    b = 0;

    aa >> a;
    bb >> b;

    // cout << a << endl;
    // cout << b << endl;

    c2 = a+b;

    if(c == c2) cout << "YES" << endl;

    else cout << "NO" << endl;

    return 0;
}
