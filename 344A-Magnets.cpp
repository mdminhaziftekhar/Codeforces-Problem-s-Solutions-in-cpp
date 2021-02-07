#include <iostream>

using namespace std;

int main(){

    int n, *arr, count = 1;

    cin >> n;
    arr = new int[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i<n; i++){
        if(arr[i-1] != arr[i]){
            count++;
        }
    }

    cout << count << endl;

    delete[] arr;

    return 0;
}
