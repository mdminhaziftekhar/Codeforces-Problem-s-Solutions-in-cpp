#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    map<int, int> mp;


    ll countvas = 0, countpat = 0;
    
    int n, m;

    cin >> n;


    for(int i = 0; i<n; i++){
        int j;
        cin >> j;

        mp[j] = i;

    } 

    cin >> m;

    for(int i = 0; i<m; i++){
      
      int j;
      cin >> j;

      countvas += mp[j]+1;

      countpat += (n- mp[j]);
        
    }
    

    cout << countvas << " " << countpat << endl;
}
