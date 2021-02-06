#include <bits/stdc++.h>
using namespace std;
 
void rocket(){
 
    int x = 0, y = 0, px, py;
    cin >> px >> py;
    cin.ignore();
 
    string s;
    getline(cin, s);
 
    int cu = 0, cd =0, cr = 0, cl = 0, u = 0, d =0, r = 0, l = 0;
 
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'U'){
            cu++;
        }
        else if(s[i] == 'D'){
            cd++;
        }
        else if(s[i] == 'R'){
            cr++;
        }
        else if(s[i] == 'L'){
            cl++;
        }
    }
 
    while(x != px){
        if(x < px){
            x++;
            r++;
        }
        else{
            x--;
            l++;
        }
    }
    while(y != py){
        if(y < py){
            y++;
            u++;
        }
        else{
            y--;
            d++;
        }
    }
 
    if(cu>=u && cd>=d && cr>=r && cl>=l){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
 
}
 
int main(){
 
    int t;
    cin >> t;
 
    while(t){
        rocket();
        t--;
    }
 
    return 0;
}
