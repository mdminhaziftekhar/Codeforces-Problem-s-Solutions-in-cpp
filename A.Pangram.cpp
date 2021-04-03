#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    int arr[27] = {0}, count = 0;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

    for(int i = 0; i<s.length(); i++){
        s[i] = tolower(s[i]);
        switch (s[i]) {
        case 'a': 
            arr[1]++;
            break;
        case 'b': 
            arr[2]++;
            break;
        case 'c': 
            arr[3]++;
            break;
        case 'd': 
            arr[4]++;
            break;
        case 'e': 
            arr[5]++;
            break;
        case 'f': 
            arr[6]++;
            break;
        case 'g': 
            arr[7]++;
            break;
        case 'h': 
            arr[8]++;
            break;
        case 'i': 
            arr[9]++;
            break;
        case 'j': 
            arr[10]++;
            break;
        case 'k': 
            arr[11]++;
            break;
        case 'l': 
            arr[12]++;
            break;
        case 'm': 
            arr[13]++;
            break;
        case 'n': 
            arr[14]++;
            break;
        case 'o': 
            arr[15]++;
            break;
        case 'p': 
            arr[16]++;
            break;
        case 'q': 
            arr[17]++;
            break;
        case 'r': 
            arr[18]++;
            break;
        case 's': 
            arr[19]++;
            break;
        case 't': 
            arr[20]++;
            break;
        case 'u': 
            arr[21]++;
            break;
        case 'v': 
            arr[22]++;
            break;
        case 'w': 
            arr[23]++;
            break;
        case 'x': 
            arr[24]++;
            break;
        case 'y': 
            arr[25]++;
            break;
        case 'z': 
            arr[26]++;
            break;
        
         }
        } 
    for(int i = 1; i<=26; i++){
        if(arr[i] != 0){
            count++;
        }
    }

    if(count == 26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    

    return 0;
}
