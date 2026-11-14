#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
 
const int M = 100;  // Най-голямото число за познаване 
 
int main() 
{ 
    int br = 0;          // Брояч на опитите 
    int rando, guess;    // Генерирано и въведено число 
 
    srand(time(0));     // Инициализация на генератора 
 
    rando = rand() % M + 1;  // Случайно число от 1 до 100 
 
    cout << "\nПознайте число между 1 и " << M << endl; 
 
    do 
    { 
        cout << "\nВашето предположение: "; 
        cin >> guess; 
 
        br++; 
 
        if (rando > guess) 
            cout << "ТОПЛО"; 
        else if (rando < guess) 
            cout << "СТУДЕНО"; 
        else 
        { 
            cout << "\nПознахте!"; 
            cout << "\nГенерираното число беше " << rando; 
            cout << "\nБяха ви нужни " << br << " опита."; 
        } 
 
    } while (rando != guess); 
 
    return 0; 
} 