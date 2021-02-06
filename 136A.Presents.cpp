#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, *arr, *arr2;

    cin >> n;

    arr = new int[n+1];
    arr2 = new int[n+1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        arr2[arr[i]] = i;
    }

    for(int i = 1; i<=n; i++){
        cout << arr2[i] << " ";
    }

    cout << endl;

    delete[] arr;
    delete[] arr2;

    return 0;
}


