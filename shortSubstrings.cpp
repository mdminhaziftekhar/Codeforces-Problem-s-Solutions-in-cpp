#include <iostream>

using namespace std;

void solution(){
    string s1, s2 = "";

    getline(cin, s1);

    int count = 0;

    for(int i = 0; i<s1.size(); i++){
        if(s1[0] == s1[i]){
            count++;
        }
    }

    //cout << "Count : " << count << endl;

    if(count == s1.length()){
        for(int i = 0; i<=s1.length()/2; i++){
            s2 += s1[0];
        }
    }
    else{
        for(int j = 1; j<s1.size();){
        if(s1[j-1] != s1[j]){
            s2 += s1[j-1];
            j++;
        }
        else{
            s2 += s1[j-1];
            j += 2;
        }
    }
        s2+=s1[s1.length()-1];
    }
    
    cout << s2 << endl;
}

int main(){

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        solution();
    }
    

    return 0;
}
