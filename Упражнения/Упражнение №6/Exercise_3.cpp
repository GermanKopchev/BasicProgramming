#include <iostream> 
using namespace std; 
 
int main() { 
    float A[3][3], B[3][3]; 
    int flag = 0; 
 
    // Въвеждане на матрица A 
    cout << "Въведете елементите на матрица A:\n"; 
 
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            cout << "A[" << i + 1 << "][" << j + 1 << "] = "; 
            cin >> A[i][j]; 
        } 
    } 
 
    // Копиране на матрица A в B 
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            B[i][j] = A[i][j]; 
        } 
    } 
 
    // Проверка за отрицателен елемент в последния ред 
    for (int j = 0; j < 3; j++) { 
        if (A[2][j] < 0) { 
            flag = 1; 
        } 
    } 
 
    // Промяна на главния диагонал на B 
    if (flag == 1) { 
        for (int i = 0; i < 3; i++) { 
            B[i][i] = 1; 
        } 
    } 
 
    // Извеждане на матрица A 
    cout << "\nМатрица A:\n"; 
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            cout << A[i][j] << "\t"; 
        } 
        cout << endl; 
    } 
 
    // Извеждане на матрица B 
    cout << "\nМатрица B:\n"; 
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            cout << B[i][j] << "\t"; 
        } 
        cout << endl; 
    } 
 
    return 0; 
}