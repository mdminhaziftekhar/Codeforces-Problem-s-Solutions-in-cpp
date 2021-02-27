#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0, p, q;

    cin >> n;

    while(n){
        cin >> p >> q;
        if((q - p) >= 2){
            count++;
        }
        n--;
    }

    cout << count << endl;

    return 0;
}
