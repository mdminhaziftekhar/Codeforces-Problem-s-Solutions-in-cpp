#include <iostream>
#include <vector>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> v;

        for(int i = 0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int countU = 0;

        for(auto it : v){
            if(it == 1){
                countU++;
            }
            else if(it == 3){
                countU++;
            }
        }

        cout << countU << endl;
    }

    return 0;
}
