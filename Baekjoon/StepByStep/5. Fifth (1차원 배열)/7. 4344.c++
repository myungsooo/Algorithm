#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int c, n, num;
	int avg;
	int score[1000] = { 0 };
	double result;
	
	cin >> c;
	for (int i = 0; i < c; i++) {
		avg = 0;
		num = 0;
		cin >> n;
		
		for (int j = 0; j < n; j++) {
			cin >> score[j];
			avg = avg + score[j];
		}
		
		avg = avg / n;
		for (int j = 0; j < n; j++) {
			if (score[j] > avg)
			num++;
		}
		result = (double)num / n * 100;
		
		cout << fixed;
		cout.precision(3);
		cout << result << "%" << "\n";
		
	}	
	return 0;	
}