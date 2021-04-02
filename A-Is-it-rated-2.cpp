#include <iostream>
#include <string>

using namespace std;

int main(){

    string line;

    while(getline(cin, line)){
        if(line.empty()){
            break;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
