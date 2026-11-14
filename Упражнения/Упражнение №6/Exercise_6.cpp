#include <iostream> 
using namespace std; 
 
int main() { 
    int bin[64], dm, i; 
    long long number; 
    char choice; 
 
    do { 
        cout << "Въведете десетично число: "; 
        cin >> dm; 
 
        number = dm; 

        // Работа с отрицателни числа 
        if (number < 0) { 
            number = -number; 
        } 
 
        // Преобразуване в двоична бройна система 
        for (i = 0; number > 0; i++) { 
            bin[i] = number % 2; 
            number = number / 2; 
        } 
 
        // Извеждане на двоичното число 
        cout << "Двоичното число е: "; 
 
        if (dm == 0) { 
            cout << 0; 
        } 
        else { 
            if (dm < 0) { 
                cout << "-"; 
            } 
 
            for (int k = i - 1; k >= 0; k--) { 
                cout << bin[k]; 
            } 
        } 
 
        // Запитване за ново число 
        cout << "\n\nНово число? (y/n): "; 
        cin >> choice; 
 
        cout << endl; 
 
    } while (choice == 'y' || choice == 'Y'); 
 
    return 0; 
} 