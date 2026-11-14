#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
 
int main() 
{ 
    double a, b, c, alpha, beta, gama, E; 
    const double PI = 3.141592653589793; 
 
    do 
    { 
        cout << "Въведете страни на триъгълника:"; 
        cout << "\na = "; cin >> a; 
        cout << "b = "; cin >> b; 
        cout << "c = "; cin >> c; 
 
    } while (a <= 0 || b <= 0 || c <= 0 || 
             a >= b + c || b >= a + c || c >= a + b); 
 
    alpha = acos((b*b + c*c - a*a) / (2*b*c)) * 180 / PI; 
    beta = acos((a*a + c*c - b*b) / (2*a*c)) * 180 / PI; 
    gama = acos((a*a + b*b - c*c) / (2*a*b)) * 180 / PI; 
 
    E = fabs(alpha + beta + gama - 180); 
 
    cout << fixed << setprecision(2); 
 
    cout << "\nalpha = " << alpha; 
    cout << "\nbeta = " << beta; 
    cout << "\ngama = " << gama; 
    cout << "\nГрешката E = " << E; 
 
    return 0; 
} 


