#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

typedef long long ll;

void test(){

    ll n;
    cin >> n;

    ll i = 0;

    while (i <= 1)
    {
        stringstream s2;
        string s;
        s2 << n;
        s2 >> s;
        ll sum = 0;
        vector<ll> v;
        // cout << "String is " << s << endl;

        for(ll j = 0; j < s.length(); j++){
            ll x;
            x = s.at(j) - '0';
            v.push_back(x);
            sum = sum + v[j];
        }
        //cout << "sum is : " << sum << endl;
        i = __gcd(n, sum);

        //cout << "i is : " << i << endl;

        if(i > 1){
            break;
        }
        else{
            n++;
        }
    }
    cout << n << endl;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        test();
    }

    return 0;
}
