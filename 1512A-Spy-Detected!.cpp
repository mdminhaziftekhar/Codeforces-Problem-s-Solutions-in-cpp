#include <iostream>
#include "vector"
#include <map>

using namespace std;

int main(){

    int t;
    cin >> t;


    while(t--){

        map<int , int> mp;
        
        int n;
        cin >> n;
        vector<int> v;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
         }

         int x;

         map<int, int> :: iterator it;
         for(it = mp.begin(); it != mp.end(); it++){
            
            if(it->second == 1){
                x = it->first;
                // cout << "x : " << x << endl;
                break;
            }
            
            //  cout << it->first << " " <<  it->second << endl;
         }

         for(int i = 0; i<n; i++){
             if(v[i] == x){
                 cout << i+1 << endl;
                 break;
             }
         }
        
        }
    return 0;
}
