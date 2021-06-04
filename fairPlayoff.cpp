#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        vector<int> v(4);

        for(int &it : v) cin >> it;

        int max1 = 0 , max2 = 0;

        max1 = max(v[0], v[1]);
        max2 = max(v[2] ,v[3]);

        sort(v.begin(), v.end());

        if((v[3] == max1 && v[2] == max2) || (v[3] == max2 && v[2] == max1)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}
