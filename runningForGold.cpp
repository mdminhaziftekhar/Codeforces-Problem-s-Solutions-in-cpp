#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        
        cin >> n;

        int arr[n][5];

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                cin >> arr[i][j];
            }
        }

        if(n == 1){
            cout << 1 << endl;
            continue;
        }

        int res = -1, max = 0;

        for(int i = 1; i<n; i++){

            int num = 0;

            for (int j = 0; j < 5; ++j)
            {
                if(arr[i][j] < arr[max][j]) num++;
            }

            if(num >= 3) max = i;
        }

        int i;

        for(i = 0; i<n; i++){

            int num = 0;

            if(i != max){
                
                for(int j = 0; j<5; j++){
                    
                    if (arr[i][j] < arr[max][j])
                    {
                        num++;
                    }

                }

                if(num >= 3){
                    res = -1; 
                    break;
                }
            }

        }

        if(i == n) cout << max+1 << endl;

        else cout << res << endl;


    }

    return 0;
}
