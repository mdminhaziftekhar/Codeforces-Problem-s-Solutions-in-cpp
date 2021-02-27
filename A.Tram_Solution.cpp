#include <iostream>
using namespace std;

int main(){

    int n, k = 0, max = 0, a, b;

    cin >> n;

   while(n){
        cin >> a >> b;

        k = (k - a) + b;

        if(k > max){
            max = k;
        }
        n--;
   }

   cout << max << endl;

    return 0;
}
