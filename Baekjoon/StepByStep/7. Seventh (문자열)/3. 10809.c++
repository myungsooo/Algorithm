#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
	
	cin >> s;
	for (int i = 0; i < alphabet.length(); i++) {
		if (s.find(alphabet[i]) == string::npos)
		cout << -1 << " ";
		else {
        cout << s.find(alphabet[i]) << " ";
		continue;
		}			
	}
}