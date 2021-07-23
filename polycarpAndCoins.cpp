#include <bits/stdc++.h>

using namespace std;

void solution(){
    
    int n, c1, c2;
    double d;
    cin >> n;

    if(n%3 == 0){
        c2 = n/3;
        c1 = c2;
    }
    else{
        d = ceil(n / 3.0);
        c1 = d;
        c2 = c1 - 1;

        if(((c2*2) + c1) != n){
            int temp = c1;
            c1 = c2;
            c2 = temp;
        }
    }
    cout << c1 << " " << c2 << endl;
}

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }
    

    return 0;
}
