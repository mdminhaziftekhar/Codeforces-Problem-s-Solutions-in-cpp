#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int counta1 = 0, counta0 = 0, countb1 = 0, countb0 = 0, count1 = 0;

void solve() {

    int a, b;
    cin >> a >> b;

    switch(a){
        case 0 : 
            counta0++;
            break;
        case 1:
            counta1++;
            break;
    }

    switch(b){
        case 0:
            countb0++;
            break;
        case 1:
            countb1++;
            break;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc;
    cin >> tc;

    for (int t = 0; t < tc; t++) {
        
        solve();
    }


    // cout << "counta0 : " << counta0;

    if(counta1 > counta0) count1 = count1 + counta0;
    else count1 = count1 + counta1;

    if(countb1 > countb0) count1 = count1 + countb0;
    else count1 = count1 + countb1;

    cout << count1 << endl;
}
