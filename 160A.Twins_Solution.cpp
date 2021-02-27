#include <iostream>
#include <algorithm>
using namespace std;

int total(int size, int arra[]){
    int totala = 0;

    for(int i = 0; i <= size; i++){
        totala += arra[i];
    }
    return totala;
}

int main(){

    int n, *arr, total1 = 0, total2 = 0, count = 1, m = 0;
    //input...
    cin >> n;
    arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //sorting...
    sort(arr, arr+n);

    m = n - 1;

    total2 = total(m-1, arr);

    total1 = arr[m];

    while(total1 <= total2){
        m--;
        total1 += arr[m];
        count++;
        if(m-1 < 0){
            break;
        }
        else{
            total2 = total(m-1, arr);
        }
    }

    cout << count << endl;

    delete[] arr;

    return 0;
}
