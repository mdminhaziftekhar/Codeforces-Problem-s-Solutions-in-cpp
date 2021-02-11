#include <bits/stdc++.h>
using namespace std;

void check(){

    int n, k, *h, x;
    cin >> n >> k;

    h = new int[n];

    for(int i = 0; i<n; i++){
        cin >> h[i];
    }

    if(k >= 10000){
        cout << -1 << endl;
    }
    else{
        bool b = true;

        while(k && b){
            k--;

            for(int i = 0; i < n; i++){
                if(i == n-1){
                    cout << -1 << endl;
                    b = false;
                    break;
                }
                if(h[i] < h[i+1]){
                    h[i]++;
                    x = i;
                    break;
                }
            }
        }

        if(b){
            cout << x+1 << endl;
        }
    }

    delete[] h;
}

int main(){

    int t;

    cin >> t;

    while(t){
        check();
        t--;
    }


    return 0;
}
