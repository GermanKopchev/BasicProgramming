#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
 
int main() 
{ 
    double v0, v1, x;  // Старо и ново приближение 
 
    cout << fixed << setprecision(3); 
    cout << "Корен трети от числата от -10 до 10:\n"; 
 
    for (x = -10; x <= 10; x++)  { 
        if (x >= 1)  v1 = x / 3; 
        else v1 = x; 
        do 
        { 
            v0 = v1; 
            if (v0 == 0) 
                v1 = 0; 
            else 
                v1 = v0 + (x / (v0 * v0) - v0) / 3; 
        } while (fabs(v1 - v0) > 0.00001); 
 
        cout << setw(8) << x << " е равен на: " 
             << setw(8) << v1 << endl; 
    } 
 
    return 0; 
}