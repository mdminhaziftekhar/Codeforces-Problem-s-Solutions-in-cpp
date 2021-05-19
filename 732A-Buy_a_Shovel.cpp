#include <iostream>

using namespace std;

int main(){
		int p,r,count = 2, ans = 0, p2;

		cin >> p >> r;

		if(((p-r)%10==0) || p%10==0) {
			ans = 1;
		}
		else {
			while(1){
				p2 = p * count;

				if(((p2-r)%10==0) || p2%10==0) {
					ans = count;
					break;
				}
				count = count+1;
			}
		}
		cout << ans << endl;

    return 0;
}
