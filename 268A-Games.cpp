#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int match(int x, vector<int> v){
    int count = 0;

    for(int i = 0; i<v.size(); i++){
        if(v[i] == x){
            count++;
        }
    }
    return count;
}

int main(){

    int n, count = 0;
    cin >> n;

    vector<int> h;
    vector<int> a;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        h.push_back(x);
        a.push_back(y);
    }

    // for(int i = 0; i<n; i++){
    //     cout << h[i] << " " << a[i] << endl;
    // }

    for(int i = 0; i<n; i++){
        count = count + match(h[i], a);
        // cout << "i : " << i << " v[i] : " << h[i] << " count : " << count << endl;
    }

    cout << count << endl;

    return 0;   
}
