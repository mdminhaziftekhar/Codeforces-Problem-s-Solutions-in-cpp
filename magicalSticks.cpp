#include <iostream>

using namespace std;

void solution(){
	int n;
	cin >> n;

	if(n%2 != 0){
		int ans = n / 2;
		ans += 1;
		cout << ans << endl;
	}
	else{
		int ans = n/2;
		cout << ans << endl;
	}
}

int main(){

	int t;
	cin >> t;

	while(t--) solution();

	return 0;
	
}
