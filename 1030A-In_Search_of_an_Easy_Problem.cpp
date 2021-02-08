#include <iostream>

using namespace std;

int main(){

    int n, *arr, hard = 0;

    cin >> n;

    arr = new int[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
        if(arr[i] != 0){
            hard++;
        }
    }

    if(hard == 0){
        cout << "EASY" << endl;
    }
    else{
        cout << "HARD" << endl;
    }

    delete[] arr;

    return 0;
}
