#include <iostream> 

int main() { 
    for (int code = 65; code <= 90; code++) { 
        cout << "ASCII код " << code 
                  << " -> символ " << char(code) << '\n'; 
    } 
    return 0; 
} 