#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v(3);

    int mid = 0, ans = 0;

    for(int &it : v) cin >> it;

    sort(v.begin(), v.end());

    mid = v[1];

    if(v[0] >= mid){
            if(v[0] > mid){
                ans = ans + (v[0] - mid);
            }
            else {
                ans = ans + 0;
            }
        }
    else{
        ans = ans + (mid - v[0]);
        }
    if(v[2] >= mid){
            if(v[2] > mid){
                ans = ans + (v[2] - mid);
            }
            else {
                ans = ans + 0;
            }
        }
    else{
        ans = ans + (mid - v[2]);
        }

    cout << ans << endl;

    return 0;
}
