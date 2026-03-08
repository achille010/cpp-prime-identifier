#include <iostream>
using namespace std;

int main(){
    int inp, otp, count;
    
    cout << "Input the number to be reversed: ";
    cin >> inp;
    
    while(inp > 0){
        otp *= 10;
        otp += inp % 10;
        inp /= 10;
    }
    
    cout << "The reversed number is " << otp;
    
    return 0;
}