#include <iostream>
#include <algorithm>
#define For(i,x,y) for(i=x; i<=y; i++)

using namespace std;

int main(){

    int i,n,m,mi,a[60];

    cin >> n >> m;

    For(i,1,m) cin >> a[i];

    sort(a+1, a+m+1);

    mi = (int)1e9;

    For(i , 1 , m-n+1){
        mi = min(mi, a[i+n-1] - a[i]);
    }

    cout << mi << endl;

    return 0;
}
