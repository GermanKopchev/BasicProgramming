#include <iostream> 
#include <cmath> 
using namespace std; 
 
int main() 
{ 
    int choice, ch;  // За избор от меню 
    double a;        // Аргумент на математическа функция 
 
    do 
    { 
        cout << "\nВъведете стойност за a: "; 
        cin >> a; 
 
        cout << "\n   Математически функции\n"; 
        cout << "1. log\n"; 
        cout << "2. exp\n"; 
        cout << "3. sqrt\n"; 
        cout << "4. Тригонометрични функции\n"; 
        cout << "5. Изход от програмата\n"; 
 
        do 
        { 
            cout << "\nИзберете от 1 до 5: "; 
            cin >> choice; 
        } while (choice < 1 || choice > 5); 
 
        switch (choice) 
        { 
            case 1: 
                if (a > 0) 
                    cout << "log(" << a << ") = " << log(a); 
                else 
                    cout << "Невалиден аргумент за log!"; 
                break; 
 
            case 2: 
                cout << "exp(" << a << ") = " << exp(a); 
                break; 
 
            case 3: 
                if (a >= 0) 
                    cout << "sqrt(" << a << ") = " << sqrt(a); 
                else 
                    cout << "Невалиден аргумент за sqrt!"; 
                break; 
 
            case 4: 
                do 
                { 
                    cout << "\nТригонометрични функции\n"; 
                    cout << "1. sin\n"; 
                    cout << "2. cos\n"; 
                    cout << "3. tg\n"; 
                    cout << "4. cotg\n"; 
                    cout << "5. Връщане в менюто\n"; 
 
                    do 
                    { 
                        cout << "\nИзберете от 1 до 5: "; 
                        cin >> ch; 
                    } while (ch < 1 || ch > 5); 
 
                    switch (ch) 
                    { 
                        case 1: 
                            cout << "sin(" << a << ") = " << sin(a); 
                            break; 
 
                        case 2: 
                            cout << "cos(" << a << ") = " << cos(a); 
                            break; 
 
                        case 3: 
                            cout << "tg(" << a << ") = " << tan(a); 
                            break; 
 
                        case 4: 
                            if (fabs(sin(a)) > 0.0000001) 
                                cout << "cotg(" << a << ") = " << 1/tan(a); 
                            else 
                                cout << "cotg не е дефинирана!"; 
                            break; 
 
                        case 5: 
                            cout << "Връщане в менюто"; 
                    } 
 
                    if (ch != 5) 
                    { 
                        cout << "\nНатиснете Enter..."; 
                        cin.ignore(); 
                        cin.get(); 
                    } 
 
                } while (ch != 5); 
                break; 
 
            case 5: 
                cout << "\nКрай на програмата!\n"; 
        } 
 
        if (choice != 5) 
        { 
            cout << "\nНатиснете Enter..."; 
            cin.ignore(); 
            cin.get(); 
        } 
 
    } while (choice != 5); 
 
    return 0; 
}