#include <iostream>
using namespace std;

int main(){

    int x, count = 0;

    cin >> x;

    while(x){
        if(x >= 5){
            x -= 5;
            count++;
        }
        else{
            switch(x){
                case 4:
                    x -= 4;
                    count++;
                    break;
                case 3:
                    x -= 3;
                    count++;
                    break;
                case 2:
                    x -= 2;
                    count++;
                    break;
                case 1:
                    x -= 1;
                    count++;
                    break;
                default:
                    break;
            }
        }
        if(x <= 0){
                break;
            }
    }

    cout << count << endl;

    return 0;
}
