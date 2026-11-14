#include <iostream> 
#include <cmath> 
using namespace std; 
 
int main() 
{ 
    int n = 1; 
    double v_old, v_new, x, a; 
 
    cout << "x = "; 
    cin >> x; 
 
    cout << "a = "; 
    cin >> a; 
 
    if (a == 0 || fabs(x) >= fabs(a)) 
    { 
        cout << "Невалидни стойности на x и a!"; 
        return 0; 
    } 
 
    v_new = a;  // Първото събираемо 
 
    do 
    { 
        v_old = v_new; 
        v_new += pow(x / a, n);  // Новата сума 
        n += 2; 
    } while (fabs(v_new - v_old) > 1e-7); 
 
    cout << "\nV = " << v_new; 
 
    return 0; 
} 
