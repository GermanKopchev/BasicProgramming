#include <iostream> 
using namespace std; 
 
int main() { 
    const int N = 10; 
 
    int a[N], b[N], c[N]; 
    int k = 0, m = 0, temp; 
 
    // Въвеждане на числата в масив A 
    for (int i = 0; i < N; i++) { 
        cout << "Въведете A[" << i << "] = "; 
        cin >> temp; 
 
        // Проверка за положително число 
        while (temp <= 0) { 
            cout << "Въведете положително число: "; 
            cin >> temp; 
        } 
 
        a[i] = temp; 
 
        // Проверка за четно или нечетно число 
        if (a[i] % 2 == 0) { 
            b[k] = a[i]; 
            k++; 
        } 
        else { 
            c[m] = a[i]; 
            m++; 
        } 
    } 
 
    // Извеждане на масив A 
    cout << "\nМасив A: "; 
    for (int i = 0; i < N; i++) { 
        cout << a[i] << " "; 
    } 
 
    // Извеждане на четните числа 
    cout << "\nМасив B (четни): "; 
    if (k > 0) { 
        for (int i = 0; i < k; i++) { 
            cout << b[i] << " "; 
        } 
    } 
    else { 
        cout << "Няма четни числа."; 
    } 
 
    // Извеждане на нечетните числа 
    cout << "\nМасив C (нечетни): "; 
    if (m > 0) { 
        for (int i = 0; i < m; i++) { 
            cout << c[i] << " "; 
        } 
    } 
    else { 
        cout << "Няма нечетни числа."; 
    } 
 
    // Извеждане на броя на числата 
    cout << "\n\nBroi четни числа: " << k; 
    cout << "\nBroi нечетни числа: " << m << endl; 
 
    return 0; 
}