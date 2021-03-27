#include "iostream"
#include <vector>
#include <algorithm>

using namespace std;

int findmin(int x, vector<int> v){
    int position;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == x){
            position = i;
        }
    }
    return position;
}

int findmax(int y, vector<int> v3){
    int position;
    for(int i = 0; i<v3.size(); i++){
        if(v3[i] == y){
            position = i;
            break;
        }
    }
    return position;
}

int main(){
    int n, count = 0;
    cin >> n;

    vector<int> v1;
    vector<int> v2;

    int min_index_initial, min_index_last, max_index_initial, max_index_last;

    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }

    v2 = v1;

    sort(v2.rbegin(), v2.rend());

    // for(auto it : v2){  
    //     cout << it << endl;
    // }

    min_index_last = n-1;
    max_index_last = 0;

    min_index_initial = findmin(v2[min_index_last], v1);
    max_index_initial = findmax(v2[max_index_last], v1);

    // cout << "min index initial is " << min_index_initial << endl;
    // cout << "max index initial is " << max_index_initial << endl;

    if(v1[0] == v2[0]){
        int b = min_index_last - min_index_initial;
        count = count + b;
    }
    
    else if(max_index_initial > min_index_initial){
        count = -1;
        int a = max_index_initial - max_index_last;
        int b = min_index_last - min_index_initial;
        count = count + a + b;
    }
    else{
        int a = max_index_initial - max_index_last;
        int b = min_index_last - min_index_initial;
        count = count + a + b;
    }

    cout << count << endl;

    return 0;
}
