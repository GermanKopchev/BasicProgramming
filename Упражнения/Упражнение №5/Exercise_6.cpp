include <iostream> 
#include <cmath> 
using namespace std; 
 
int main() 
{ 
    int n, i; 
    double x; 
    double R = 1; 
 
    cout << "\nВъведете x = "; 
    cin >> x; 
 
    cout << "Въведете n = "; 
    cin >> n; 
 
    for (i = 1; i <= n; i++) 
    { 
        R *= (pow(x, i + 1) / (2 * i) + 1); 
    } 
 
    cout << "\nРезултат R = " << R; 
 
    return 0; 
}