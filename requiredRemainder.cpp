#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solution() {
    
	int x, y, n;
    cin >> x >> y >> n;

    if((n - n % x + y) <= n){
        cout << n - n % x+y << endl;
    }else{
        cout << n - n % x - (x - y) << endl;
    }


}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   
    ll t;
	cin >> t;
	
    while(t--) {
        solution();
    }

    return 0;
}
