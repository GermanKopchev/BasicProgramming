#include <iostream>
using namespace std;
 
int main() { 
    int num; 
    unsigned long long product = 1; 
    cout << "Въведете цели числа (0 за край): "; 
    while (true) { 
        cin >> num; 
        if (num == 0) break; 
        product *= num; 
    } 
    cout << "Произведение на положителните числа = " << product << '\n'; 
    return 0; 
} 