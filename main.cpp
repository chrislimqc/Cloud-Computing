#include<iostream>
using namespace std;

int main() {
    int password;
    cout << "Enter your password: ";
    cin >> password;    
    // This is just anyhow one
    if(password == 1234) {
        cout << "Access granted.";   
    } else {
        cout << "Access denied.";   
    }    
    return 0;
}
        