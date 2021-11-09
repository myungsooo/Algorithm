#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
	int n;
	char a;
	int total = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		total += a - 48;
	}
	
	cout << total << "\n";
	
	
	return 0;
	
}