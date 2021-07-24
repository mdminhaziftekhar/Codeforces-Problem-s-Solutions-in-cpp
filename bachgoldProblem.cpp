#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   
    int n;

    cin >> n;

    if(n%2 == 0){

        cout << n/2 << endl;

        for(int i = 0; i<(n/2); i++) cout << 2 << " ";

        cout << endl;

    }
    else{

        cout << n/2 << endl;

        for(int i = 0; i<(n/2)-1; i++) cout << 2 << " ";

        cout << 3 << endl;

    }

    return 0;
}
