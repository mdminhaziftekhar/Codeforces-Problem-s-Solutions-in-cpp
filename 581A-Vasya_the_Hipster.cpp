#include <iostream>

using namespace std;

int main() {
		int r, b;
		cin >> r >> b;
		int a = 0, ans1 = 0, ans2 = 0;

		if(r<b) {
			ans1 = r;
			a = b - r;
			ans2 = a/2;
		}
		else {
			ans1 = b;
			a = r - b;
			ans2 = a/2;
		}

        cout << ans1 << " " << ans2 << endl;

}
