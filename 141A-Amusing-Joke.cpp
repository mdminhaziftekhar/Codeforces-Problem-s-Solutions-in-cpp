#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> mp;

map<string, int> sp;

int main(){

    // string s;
    // cin >> s;
    
    // mp[s]++;

    // map<string, int> :: iterator it;

    // for(it = mp.begin(); it!=mp.end(); it++){
    //     cout << (*it).first << " " << (*it).second << endl;
        
    // }

    string a, b, c;
    cin >> a >> b;
    cin >> c;

    for(int i = 0; i<a.length(); i++){
        string s;
        s = a[i];
        mp[s]++;
    }
    
    for(int i = 0; i<b.length(); i++){
        string s;
        s = b[i];
        mp[s]++;
    }

    for(int i = 0; i<c.length(); i++){
        string s;
        s = c[i];
        sp[s]++;
    }
    int count = 0;

    char k = 'A';

    for(int i = 0; i < 26; i++){
        string s2;
        s2 += k;
        // cout << "mp[s] : " << mp[s] << endl;
        // cout << "sp[s] : " << sp[s] << endl;
        if(mp[s2] != sp[s2]){
            count = 1;
            break;
        }
        k = k + 1;
        // cout << "K : " << k << endl;
        // cout << "S : " << s2 << endl;
    }
    // cout << "count " << count << endl;

    if(count == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    // map<string, int> :: iterator it;

    // for(it = mp.begin(); it!=mp.end(); it++){
    //     cout << it->first << " " << it->second << endl;
    // }
  

    return 0;
}
