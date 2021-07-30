#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

int main(){

	string s;

	cin >> s;

	for(int i = 0; i<s.size(); i++){

		if(s[i] == '.') cout << 0;

		else if(s[i] == '-'){
			if(i+1 != s.size()){
				if(s[i+1] == '.'){
					cout << 1;
					i++;
				}else if(s[i+1] == '-'){
					cout << 2;
					i++;
				}
			}
		}

	}

	cout << endl;

	return 0;
}
