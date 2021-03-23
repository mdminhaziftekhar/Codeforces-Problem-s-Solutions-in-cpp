#include <iostream>

using namespace std;

int arr[101];

int main(){

    int n;

    cin >> n;

    int p , q;

    cin >> p;

    for(int i = 0; i<p; i++){
        int x;
        cin >> x;
        arr[x]++;
    }

    cin >> q;

    for(int i = 0; i<q; i++){
        int x;
        cin >> x;
        arr[x]++;
    }

    int count = 0;
    
    for(int i = 1; i<=n; i++){
        if(arr[i] == 0){
            count = 1; //to be 1 is to be oh my keyborad
            break;
        }
    }

    if(count == 0){
        cout << "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
