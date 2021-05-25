#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        for(int &it : a) cin >> it;

        sort(a.begin(), a.end());

        int count = 1;

        for(int i = 1; i<a.size(); i++){
            if((a[i]-a[i-1])>1){
                count = 0;
                break;
            }
        }
        if(count == 0) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

    return 0;
}
