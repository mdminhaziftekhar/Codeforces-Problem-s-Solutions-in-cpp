#include <iostream>
#include <string>

using namespace std;

int main(){

    int n, sum = 0;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        if(s == "Tetrahedron"){
            sum += 4;
        }
        else if(s == "Cube"){
            sum += 6;
        }
        else if(s == "Octahedron"){
            sum += 8;
        }
        else if(s == "Dodecahedron"){
            sum += 12;
        }
        else if(s == "Icosahedron"){
            sum += 20;
        }
    }

    cout << sum << endl;

    return 0;
}
