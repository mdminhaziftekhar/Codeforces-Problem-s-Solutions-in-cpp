#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for(int &it:v) cin >> it;
    sort(v.begin(), v.end());

    int h = v[n-1], ans = 0;

    for(int i = 0; i<v.size(); i++){
        ans = ans + (h - v[i]);
    }

    cout << ans << endl;

    return 0;
}
