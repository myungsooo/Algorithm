#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int arr[10];
    int result = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        arr[i] = arr[i] % 42;
    }

    for (int i = 0; i < 10; i++) {
        int cnt = 0;
        for (int j = 0; j < i; j++) {
        if (arr[i] == arr[j])
        cnt++;
        }
        if (cnt ==0)
        result++;
    }
    cout << result;
    return 0;

}