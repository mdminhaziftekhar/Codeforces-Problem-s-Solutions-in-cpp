#include <bits/stdc++.h>
using namespace std;
int main(){

    string s1,s2; //declaring 2 strings
    getline(cin,s1); 
    getline(cin,s2);
    
    //code for conversion to upper case
    for_each(s1.begin(),s1.end(),[](char &c){

        c = toupper(c);

    });
    for_each(s2.begin(),s2.end(),[](char &c){

        c = toupper(c);

    });
    
    if(s1==s2){
        cout<<"0"<<endl;
    }
    else{
        for(int i=0; i<s1.length(); i++){
            if(s1.at(i)!=s2.at(i)){
                if(s1.at(i)>s2.at(i)){
                    cout<<"1"<<endl;
                    break;
                }
                else{
                    cout<<"-1"<<endl;
                    break;
                }
            }
        }
    }
    

    return 0;
}
