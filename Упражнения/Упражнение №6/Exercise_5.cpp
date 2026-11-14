#include <iostream> 
#include <cstring> 
using namespace std; 
 
int main() { 
    const int N = 10; 
    char text[N][80]; 
    int len[N]; 
    int min, max, x = 1, n = 1; 
 
    // Въвеждане на 10 реда текст 
    cout << "Въведете " << N << " реда от текст:\n"; 
 
    for (int i = 0; i < N; i++) { 
        cout << "Ред " << i + 1 << ": "; 
        cin.getline(text[i], 80); 
    } 
 
    // Определяне на дължината на всеки ред 
    for (int i = 0; i < N; i++) { 
        len[i] = strlen(text[i]); 
    } 
 
    // Начални стойности за минимум и максимум 
    min = len[0]; 
    max = len[0]; 
 
    // Търсене на най-краткия и най-дългия ред 
    for (int i = 0; i < N; i++) { 
        if (len[i] < min) { 
            min = len[i]; 
            n = i + 1; 
        } 
 
        if (len[i] > max) { 
            max = len[i]; 
            x = i + 1; 
        } 
    } 
 
    // Извеждане на въведения текст 
    cout << "\nВъведете текст:\n"; 
 
    for (int i = 0; i < N; i++) { 
        cout << text[i] << endl; 
    } 
 
    // Извеждане на резултатите 
    cout << "\nМаксималн дължина на реда " 
         << x << ": " << max << endl; 
 
    cout << "Минимална дължина на ред " 
         << n << ": " << min << endl; 
 
    return 0; 
} 