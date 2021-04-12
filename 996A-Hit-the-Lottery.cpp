#include <iostream>

using namespace std;

int main(){

    int count = 0, a;

    cin >> a;

   
        if(a >= 100){
            
            count = count + (a/100);
            a = a % 100;
            
        }

        // cout << "Count 1 : " << count << endl << "A  : " << a << endl;
    
        if(a >= 20 ){
            count = count + (a/20);
            a = a % 20;
        }
        
    // cout << "Count 2 : " << count << endl << "A : " << a << endl;
    
        if(a >= 10){
            count = count + (a/10);
            a = a % 10;
        }
        
    // cout << "Count 3 : " << count << endl;
        if(a >= 5){
            count = count + (a/5);
            a = a % 5;
        }
        
    // cout << "Count 4 : " << count << endl << "a : " << a << endl;
       
        if(a >= 1){
            count = count + a;
        }
       
    cout << count << endl;

    return 0;
}
