#include <iostream>

using namespace std;

int main(){
		int a, n;

		cin >> a;
		cin >> n;
		a--;

		int low = n;
		int high = n;

		int count = 0;

		while(a>0) {
			a--;

			cin >> n;

			if(n < low) {
				count++;
				low = n;
			}
			else if(n > high) {
				count++;
				high = n;
			}

		}

		cout << count << endl;


	}
