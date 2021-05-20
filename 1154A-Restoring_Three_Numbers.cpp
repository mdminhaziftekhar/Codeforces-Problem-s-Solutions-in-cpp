#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v(4);

    for(int i = 0; i<4; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int a = v[3] - v[2];
    int b = v[3] - v[1];
    int c = v[3] - v[0];

    cout << a << " " << b << " " << c << endl;
}
