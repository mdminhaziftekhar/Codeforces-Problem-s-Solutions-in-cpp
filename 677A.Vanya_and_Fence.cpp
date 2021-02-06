#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h, sum = 0, *a;
    cin >> n >> h;

    a = new int[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] > h){
            sum += 2;
        }
        else{
            sum += 1;
        }
    }

    cout << sum << endl;

    delete[] a;

    return 0;
}
