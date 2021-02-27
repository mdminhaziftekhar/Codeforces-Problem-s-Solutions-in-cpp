#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    int count = 0;

    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '4' || s.at(i) == '7'){
            count++;
        }
    }

    if(count == 0){
        cout << "NO" << endl;
    }
    else if(count==4 || count%7==0 || count%44==0 || count%47==0 || count%74==0 || count%77==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


    return 0;
}
