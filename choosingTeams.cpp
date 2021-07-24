#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n, k;

    cin >> n >> k;

    vector<int> v(n);

    for(int &i : v) cin >> i;

    int ans = 0, count = 0;

    for(int i = 0; i<v.size(); i++){
        v[i] += k;
    }

    for(int i = 0; i<v.size(); i++){
        if(v[i] <= 5) count++;

        if(count == 3){
            ans++;
            count = 0;
        }
    }

    cout << ans << endl;
    

    return 0;
}
