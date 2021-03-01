#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;

    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    double ans = 0, x = 0;

    for(int i = 0; i<v.size(); i++){
        x += (double) v[i];
    }

    x = x / 100.00;

    ans = (x / (double) n) * 100.00;

    cout << setprecision(12) << ans << endl;

    return 0;
}
