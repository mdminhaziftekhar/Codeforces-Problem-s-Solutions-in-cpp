#include <iostream>
#include <cstdlib>
#include <algorithm>
#include "cmath"
using namespace std;

typedef long long ll;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int ari[n+1] = {0};
        int dep[n+1] = {0};

        for(int i = 1; i<n+1; i++){
            cin >> ari[i] >> dep[i];
        }

        int tm[n+1];
        for(int i = 0; i<n; i++){
            cin >> tm[i];
        }

        ll arrival = 0, previous_dep = 0;

        for(int i = 1; i<=n ; i++){
            int traveltime = abs(ari[i] - dep[i-1]);

            arrival = previous_dep + (traveltime + tm[i-1]);

            int wait = abs(ari[i] - dep[i]);

            wait = (double) ceil(wait / 2.00);

            previous_dep = arrival + wait;
            previous_dep = max(previous_dep, (ll)dep[i]);
        }

        cout << arrival << endl;
    }

    return 0;
}
