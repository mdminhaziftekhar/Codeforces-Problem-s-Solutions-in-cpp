#include <iostream>

using namespace std;

int main(){
		
		int n, countr = 0, countc = 0, a;
		
		cin >> n;
		
		while(n--) {
			cin >> a;
			
			if(a >= 0) {
				countr += a;
			}
			else if(a < 0) {
				if(countr != 0) {
					countr--;
				}
				else {
					countc++;
				}
			}
		}

        cout << countc << endl;

    return 0;
}
