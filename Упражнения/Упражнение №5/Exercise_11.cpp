#include <iostream> 
#include <iomanip> 
using namespace std; 
 
int main() 
{ 
    long double s;  // За пресмятане на факториел 
 
    for (int i = 5; i <= 15; i++) 
    { 
        if (i == 10 || i == 13) 
            continue; 
 
        s = 1;  // Начална стойност на факториела 
 
        for (int a = i; a > 1; a--) 
        { 
            s = s * a; 
        } 
 
        cout << i << "! = " << fixed 
             << setprecision(0) << s << endl; 
    } 
 
    return 0; 
}