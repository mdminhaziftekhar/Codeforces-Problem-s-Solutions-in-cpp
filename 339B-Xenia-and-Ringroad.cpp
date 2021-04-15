#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main(){

    int n, m;
    cin >> n >> m;

    vector<int> v(m);

    for(auto &it : v)
        cin >> it;
    
    ll count = v[0] - 1;

    for(int i = 0 ; i<m-1; i++){
        if(v[i] > v[i+1]){
            count += n - (v[i] - v[i+1]);
        }
        else if(v[i] < v[i+1]){
            count += v[i+1] - v[i];
        }
    }

    cout << count << endl;

    return 0;
}
