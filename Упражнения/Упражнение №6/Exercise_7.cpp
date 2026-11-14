#include <iostream> 
#include <iomanip> 
using namespace std; 
 
int main() { 
    int A[4][5], S[4], Smin; 
 
    // Въвеждане на матрица A 
    cout << "Въведете елементите на матрица A:\n"; 
 
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 5; j++) { 
            cout << "A[" << i + 1 << "][" << j + 1 << "] = "; 
            cin >> A[i][j]; 
        } 
    } 
 
    // Изчисляване и извеждане на сумите по редове 
    cout << "\nМатрица A:\n"; 
 
    for (int i = 0; i < 4; i++) { 
        S[i] = 0; 
 
        for (int j = 0; j < 5; j++) { 
            cout << setw(5) << A[i][j]; 
            S[i] += A[i][j]; 
        } 
 
        cout << "   S" << i + 1 << " = " << S[i] << endl; 
    } 
 
    // Намиране на минималната сума 
    Smin = S[0]; 
 
    for (int i = 1; i < 4; i++) { 
        if (S[i] < Smin) { 
            Smin = S[i]; 
        } 
    } 
 
    // Извеждане на минималната сума 
    cout << "\nМинимална сума: Smin = " << Smin << endl; 
 
    return 0; 
} 
