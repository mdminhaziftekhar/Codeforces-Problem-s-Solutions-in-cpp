#include <iostream>
#include <string>

using namespace std;

int main(){

    int a_count = 0, d_count = 0,n;

    string s;

    cin >> n;
    cin.ignore();

    getline(cin, s);

    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == 'A'){
            a_count++;
        }
        else{
            d_count++;
        }
    }

    if(a_count > d_count){
        cout << "Anton" << endl;
    }
    else if(d_count > a_count){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }

    return 0;
}
