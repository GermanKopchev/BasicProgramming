#include <iostream> 
#include <cstring> 
using namespace std; 
 
int main() { 
    const int N = 12; 
 
    // Речник с 6 двойки думи 
    char dictionary[N][40] = { 
        "I",                 "аз", 
        "am",                "съм", 
        "student",           "студент", 
        "at",                "в", 
        "Technical",         "Технически", 
        "University",        "Университет", 
        "of",                "на", 
        "Varna",             "Варна", 
        "Department",        "катедра", 
        "Computer science",  "Компютърни науки", 
        "study",             "уча", 
        "programming",       "програмиране", 
        "C++",               "C++" }; 
 
    int choice; 
    char word[40], ch; 
 
    // Избор на посока на превода 
    do { 
        cout << "1. English -> Bulgarian\n"; 
        cout << "2. Bulgarian -> English\n"; 
        cout << "Избор: "; 
        cin >> choice; 
    } while (choice != 1 && choice != 2); 
 
    do { 
        cout << "\nВъведете дума: "; 
        cin >> word; 
 
        bool found = false; 
 
        switch (choice) { 
            case 1: 
                // Английски -> Български 
                for (int i = 0; i < N; i += 2) { 
                    if (strcmp(word, dictionary[i]) == 0) { 
                        cout << "Превод: " << dictionary[i + 1]; 
                        found = true; 
                        break; 
                    } 
                } 
                break; 
 
            case 2: 
                // Български -> Английски 
                for (int i = 1; i < N; i += 2) { 
                    if (strcmp(word, dictionary[i]) == 0) { 
                        cout << "Translate: " << dictionary[i - 1]; 
                        found = true; 
                        break; 
                    } 
                } 
                break; 
        } 
 
        if (!found) { 
            cout << "Думата не е намерена."; 
        } 
 
        cout << "\nДруга дума? (y/n): "; 
        cin >> ch; 
 
    } while (ch == 'y' || ch == 'Y'); 
 
    return 0; 
}