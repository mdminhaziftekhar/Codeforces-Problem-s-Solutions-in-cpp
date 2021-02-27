#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

bool check_if_distinct(string str);

int main(){

    int x = 0;
    string s;

    getline(cin, s);

    while(1){
        stringstream c(s); // to turn s to integer
        c >> x;
        x++;
        s = to_string(x);
        
        if(check_if_distinct(s)){ 
            break;
        }
    }

    cout << s << endl;

    return 0;
}

bool check_if_distinct(string str){

    sort(str.begin(), str.end());

    for(int i = 0; i < str.length() - 1; i++){
        if(str[i] == str[i+1]){
            return false;
        }
    }

    return true;

}
