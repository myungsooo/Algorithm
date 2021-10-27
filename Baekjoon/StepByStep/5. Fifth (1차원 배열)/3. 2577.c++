#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int count[10] = {};
	int a, b, c;
	
	cin >> a >> b >> c;
	
	int res = a * b * c;
	
	while(res != 0) {
		count[res % 10]++;
		res /= 10;		
	}
	
	for (int i = 0; i < 10; i++) {
		cout << count[i] << "\n";
	}
	
	return 0;
}