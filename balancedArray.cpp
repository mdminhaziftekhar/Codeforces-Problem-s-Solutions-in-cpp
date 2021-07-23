#include <bits/stdc++.h>

using namespace std;

void solution(){
    
    vector<int> v;

    int n;
    cin >> n;

    if(n % 4 != 0){
        cout << "NO" << endl;
    }
    else{
        for(int i = 2; i<=n; i+=2){
            v.push_back(i);
        }
        for(int i = 1; i<=n-1; i+=2){
            v.push_back(i);
        }
        cout << "YES" << endl;
        v[v.size()-1] += (n/2); 
        for(int i = 0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }

}

int main(){
    int t;
    cin >> t;

    while(t--) solution();

    return 0;
}
