#include <iostream>
#include <string>

// 아스키 코드 => 대문자 : 65-90 , 소문자 : 97-122 

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string str;	
	cin >> str;
	
	int num[26] = {0, };
	int max = -1;
	int idx = -1;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 97) 
			num[str[i] - 65]++; // 대문자 
		else 
			num[str[i] - 97]++; // 소문자 
	}
	
	for (int i = 0; i < 26; i++) {
		if (max < num[i]) {
			max = num[i];
			idx = i;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		if (idx == i)
			continue;
		if (max == num[i]) {
			cout << '?';
			return 0;
		}
	}
	
	cout << (char)(idx + 65);
	
	return 0;	
}