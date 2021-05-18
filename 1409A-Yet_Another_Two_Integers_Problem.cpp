#include <iostream>

using namespace std;

typedef long long ll;

int main(){

		ll t;
		cin >> t;

		while(t--) {
			ll ans = 0, a, b;
			cin >> a >> b;

			if(a == b) {
				ans = 0;
			}
			else if(b > a) {
				a = b - a;
				if(a > 10) {
					ans = a / 10;
					if(a%10!=0) {
						ans = ans + 1;
					}
				}
				else{
					ans = 1;
				}
			}
			else if(a > b) {
				a = a - b;
				if(a > 10) {
					ans = a / 10;
					if(a%10!=0) {
						ans = ans + 1;
					}

				}
				else {
					ans = 1;
				}
			}
			cout << ans << endl;
	}

    return 0;
}
