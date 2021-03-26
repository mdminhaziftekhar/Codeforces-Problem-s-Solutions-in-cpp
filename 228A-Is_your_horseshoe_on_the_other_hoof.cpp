#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int s[4+1] = {0} , count = 0;

    cin >> s[0] >> s[1] >> s[2] >> s[3];

    int n = sizeof(s) / sizeof(s[0]);

    sort(s, s+n);

    for(int i = 0; i<4; i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
