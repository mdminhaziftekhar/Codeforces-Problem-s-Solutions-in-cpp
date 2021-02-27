#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    int lower_count = 0, upper_count = 0;

    for(int i = 0; i < s.length(); i++){
        if(isupper(s.at(i))){
            upper_count++;
        }
        else{
            lower_count++;
        }
    }

    if(upper_count == lower_count){
        for_each(s.begin(), s.end(), [](char &c){
                    c = ::tolower(c);
                 });
    }
    else if(upper_count > lower_count){
        for_each(s.begin(), s.end(), [](char &c){
                    c = ::toupper(c);
                 });
    }
    else{
        for_each(s.begin(), s.end(), [](char &c){
                    c = ::tolower(c);
                 });
    }

    cout << s << endl;

    return 0;
}
