#include "bits/stdc++.h"
using namespace std;

int main(){

    int n, l, m = 0;
    cin >> n >> l;

    vector<int> v(n);

    for(auto &it : v) cin >> it;

    sort(v.begin(), v.end());

    for(int i = 0; i<n-1; i++){
        if((v[i+1] - v[i]) > m) m = v[i+1] - v[i];
    }
    //cout << "M : " << m << endl;
    double x = v[0];
    //cout<<"x : " << x << endl;
    double y = (double)m/2;
    //cout << "y : " << y <<endl;
    double ans = max(x,y);
    //cout << "ans1 : " << ans << endl;
    double z = l - v[n-1];
    //cout << "z : " << z << endl;
    ans = max(z, ans);
    //cout << "ans2 : " << ans << endl;
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
