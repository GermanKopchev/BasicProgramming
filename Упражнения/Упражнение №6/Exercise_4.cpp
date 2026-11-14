#include <iostream> 
#include <iomanip> 
using namespace std; 
 
int main() { 
    int P[10][10]; 
 
    // Създаване на таблицата на Питагор 
    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 10; j++) { 
            P[i][j] = (i + 1) * (j + 1); 
        } 
    } 
 
    // Извеждане на таблицата 
    cout << "Таблица на Питагор:\n"; 
 
    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 10; j++) { 
            cout << setw(5) << P[i][j]; 
        } 
        cout << endl; 
    } 
 
    return 0; 
} 