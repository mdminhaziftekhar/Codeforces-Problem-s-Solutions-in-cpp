#include <iostream>
#include <string>
using namespace std;

/*int loop(string str, int start, string find_this){
    int position, count;
}*/

int main(){
    string s;
    int count = 0, i, pos = 0;

    getline(cin , s);

    for(i = 0; i < s.length(); i++){
        if(s.at(i) == 'h'){
            count++;
            pos = i;
            break;
        }
    }

    //cout << "First position is " << pos << endl;


    for(i = pos+1; i < s.length(); i++){
        if(s.at(i) == 'e'){
            count++;
            pos = i;
            break;

        }
    }
    //cout << "second position is " << pos << endl;

    for(i = pos+1; i < s.length(); i++){
        if(s.at(i) == 'l'){
            count++;
            pos = i;
            break;
        }
    }
    //cout << "3rd position is " << pos << endl;


    for(i = pos+1; i < s.length(); i++){
        if(s.at(i) == 'l'){
            count++;
            pos = i;
            break;
        }
    }
    //cout << "4th position is " << pos << endl;

    for(i = pos+1; i < s.length(); i++){
        if(s.at(i) == 'o'){
            count++;
            pos = i;
            break;
        }
    }
    //cout << "Fifth position is " << pos << endl;

    //cout << count << endl;

    if(count == 5){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}
