#include <iostream>
#include <vector>

using namespace std;

int findodd(vector<int> v){
    int position;
    for(int i = 0; i<v.size(); i++){
        if(v[i] % 2 != 0){
            position = i;
            break;
        }
    }
    return position;
}

int findeven(vector<int> v){
    int position;
    for(int i = 0; i<v.size(); i++){
        if(v[i] % 2 == 0){
            position = i;
            break;
        }
    }
    return position;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int even_counter = 0, odd_counter = 0;

    for(int i = 0; i<n; i++){
        int x; 
        cin >> x;
        v.push_back(x);
        if(v[i] % 2 == 0){
            even_counter++;
        }
        else{
            odd_counter++;
        }
    }

    if(even_counter > odd_counter){
        int position = findodd(v);
        cout << position+1 << endl;
    }
    else{
        int position = findeven(v);
        cout << position+1 << endl;
    }

    return 0;
}
