#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n, *arr, *count, ct = 0;

    cin >> n;

    arr = new int[n];
    count = new int[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
        count[i] = 0;
    }



    for(int i = 1; i<n; i++){
        if(arr[i] >= arr[i-1]){
            ct++;
            count[i-1] = ct;
        }
        else{
            ct = 0;
            count[i - 1] = ct;
        }
    }

    sort(count, count+n);

    cout << count[n-1] + 1 << endl;


    delete[] arr;
    delete[] count;

    return 0;
}
