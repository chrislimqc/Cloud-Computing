#include<iostream>
using namespace std;

int main() {
    int password;
    
    cout << "Enter your password: ";
    cin >> password; 
    // 1234 is our password lo
    if(password == 1234) {
        cout << "Access granted.";   
    } else {
        cout << "Access denied.";   
    }    
    return 0;
}
    
