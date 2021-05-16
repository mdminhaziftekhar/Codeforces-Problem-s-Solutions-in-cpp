#include <iostream>

using namespace std;

int main(){

    int n, k;
    int sum = 0, count = 0;

    cin >> n >> k;

    if(k == 0){
        cout << n << endl;
    }
    else if(k == 240){
        cout << 0 << endl;
    }
    else{
        for(int i = 1; i<=n; i++){
            sum = sum + (i*5);
            if((k+sum)>240){
                break;
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
