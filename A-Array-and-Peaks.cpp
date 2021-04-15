#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    while(n--){
        int m , k;
        cin >> m >> k;

        // int max_peak = (m-1)/2;

        if(k > ((m-1)/2)) cout << -1 << endl;
        else{
            int j = 0, r = 0;
            vector<int> v(m, 0);
            int temp = k;

            for(int i = 1; i<=(m-temp); i++){
                v[j] = i;
                if(k>0) {
                    v[j+1] = m - r;
                    j+=2;
                }
                else j+=1;
                r++;
                k--;
            }

            for(auto it : v) cout << it << " ";
            cout << endl;

        }
    }
    

    return 0;
}
