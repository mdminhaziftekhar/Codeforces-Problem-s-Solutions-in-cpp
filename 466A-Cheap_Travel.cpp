#include <iostream>

using namespace std;

int main(){

    int n , m , a, b, ans = 0;

    cin >> n >> m >> a >> b;

    ans = 1e8;

    for(int i = 0 ; i <= n; i++){
            int now = (i*a)+(n-i+m-1)/m*b;
            ans = min(ans, now);
        }
    cout << ans << endl;

    return 0;
}
