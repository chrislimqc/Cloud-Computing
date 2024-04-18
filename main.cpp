#include<iostream>
using namespace std;

int main() {
    int password;
    
    cout << "Enter your password: ";
    cin >> password; 
    // 12345 is our password loasd more
    if(password == 123465) {
        cout << "Access granted.";   
    } else {
        cout << "Access denied.";   
    }    
    return 0;
}
    
