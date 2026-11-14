#include <iostream> 

int main() { 
    int num; 
    unsigned long long product = 1; 
    cout << "Въведете цели числа (0 за край): "; 
    cin >> num; 
    while (num != 0) { 
        if (num > 0) 
            product *= num; 
        cin >> num; 
    } 
    cout << "Произведение на положителните числа = " << product << '\n'; 
    return 0; 
} 