#include <iostream>

using namespace std;

int main() {
  int N, A, X;
  cin >> N >> X;

  for (int i = 1; i <= N; i++) {
    cin >> A;

    if (X > A) {
    cout << A << " ";
    }
  }

  return 0;
}