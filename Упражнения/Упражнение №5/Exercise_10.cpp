#include <iostream> 
using namespace std; 
 
int main() 
{ 
    char a, b; 
    int i = 0; 
 
    cout << "Въведете поредица от символи"; 
    cout << " (за край натиснете Enter):\n=> "; 
 
    do 
    { 
        cin.get(a);  // Въвеждане на символ 
 
        if (a >= 'a' && a < 'z') 
            b = a + 1;  // Малки букви 
 
        else if (a >= 'A' && a < 'Z') 
            b = a + 1;  // Главни букви 
 
        else if (a == 'z') 
            b = 'a';    // Буква z 
 
        else if (a == 'Z') 
            b = 'A';    // Буква Z 
 
        else 
            b = a;      // Останалите символи 
 
        if (i == 0) 
        { 
            cout << "\nПреобразуван текст:\n=> "; 
            i = 1; 
        } 
 
        cout << b; 
 
    } while (a != '\n'); 
 
    return 0; 
}