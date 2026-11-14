#include <iostream> 
#include <cstring> 
using namespace std; 
 
int main() { 
    char duma[] = "programa"; 
    char word[] = "________"; 
    char ch; 
    int count = 0; 
 
    cout << "Познайте зададената дума!\n"; 
 
    do { 
        // Показване на познатите букви 
        cout << "\nДума: " << word << endl; 
 
        // Въвеждане на буква 
        cout << "Въведете буква: "; 
        cin >> ch; 
 
        // Проверка на въведената буква 
        for (int i = 0; i < strlen(duma); i++) { 
            if (ch == duma[i]) { 
                word[i] = ch; 
            } 
        } 
 
        // Увеличаване на броя опити 
        count++; 
 
    } while (strcmp(word, duma) != 0); 
 
    // Извеждане на резултата 
    cout << "\nПозната дума: " << word << endl; 
    cout << "Браво! Познахте думата от " 
         << count << " опита!" << endl; 
 
    return 0; 
} 