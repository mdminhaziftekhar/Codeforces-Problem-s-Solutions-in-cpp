#include <bits/stdc++.h>

using namespace std;

void solution(){
    
    string s;

    getline(cin, s);

    int size = s.size();

    int count1 = 0, count2 = 0;

    map<char, int> mp;

    for(int i = 0; i<size; i++){
        mp[s[i]]++;
    }

    map<char, int> :: iterator it;

    

    for(it=mp.begin(); it!=mp.end(); it++){
        
        if(it->second == 1) count1++;

        else if(it->second >= 2){
          count1++;
          count2++;
            
        }
        
    }

    cout << (count1 + count2)/2 << endl;
    
}

int main(){

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        solution();
    }
    

    return 0;
}
