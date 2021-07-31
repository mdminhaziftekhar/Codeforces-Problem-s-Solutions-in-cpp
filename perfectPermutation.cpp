#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

deque<int> ev;
deque<int> od;

void arrangeEvenOdds(){

    for(int i = 1; i<=100; i++){
        if(i % 2 == 0) ev.push_back(i);
        else od.push_back(i);
    }

}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    arrangeEvenOdds();

    int n;
    cin >> n;

    if(n%2 != 0) cout << -1 << endl;

    else{
        for(int i = 0; i<n; i++){
            if(i%2 == 0){

                cout << ev.at(0) << " ";

                ev.pop_front();

            }else{

                cout << od.at(0) << " ";

                od.pop_front();

            }
        }
    }

    return 0;

}
