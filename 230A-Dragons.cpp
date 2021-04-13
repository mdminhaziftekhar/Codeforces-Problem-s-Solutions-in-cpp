#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include "utility"

using namespace std;

int main(){

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> x;

    for(int i = 0; i<n; i++){  
        int k, y;
        cin >> k >> y;
        x.push_back(make_pair(k, y));
    }
    sort(x.begin(), x.end());

    // for(int i = 0; i<n; i++){
    //     cout << "x : " << x[i].first << endl;
    //     cout << "Y : " << x[i].second << endl;
    // }

    int count = 0;

    

    for(int i = 0; i<n; i++){
        if(s>x[i].first){
            s = s + x[i].second;
        }
        else{
            count = 1;
            break;
        }
    }

    if(count == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;
}
