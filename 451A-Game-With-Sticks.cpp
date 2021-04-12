#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    if(n > m){
        swap(n, m);
    }
    if((n&1) == 0){
        cout << "Malvika" << endl;
    }
    else{
        cout << "Akshat" << endl;
    }

    return 0;
}
