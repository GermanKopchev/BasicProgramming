#include <iostream> 
#include <cmath> 
#include <iomanip>

int main() { 
    cout << fixed << setprecision(6); 
    for (float x = 0.5; x <= 2.5; x+=0.1) { 
        float f = pow(x,4) + 2*pow(x,3) - 13*pow(x,2) + 8*x; 
        cout << "x=" << setw(4) << setprecision(1) << x 
                  << "  f(x)=" << setw(12) << setprecision(6) << f << '\n'; 
    } 
    return 0; 
} 