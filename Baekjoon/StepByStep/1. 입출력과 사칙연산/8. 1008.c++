#include <iostream>

using namespace std; 

int main() {
    double i, j;
    cin >> i >> j;

	cout.precision(12);
	cout << fixed;
    cout << i / j << "\n";
    
    return 0;
}