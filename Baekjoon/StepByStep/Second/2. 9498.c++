#include <iostream>

using namespace std;

int main() {
  int A;
  cin >> A;

  if (A >= 90) {
    cout << "A" << "\n"; 
  }
  else if (A >= 80) {
    cout << "B" << "\n"; 
  }
  else if (A >= 70) {
    cout << "C" << "\n"; 
  }
  else if (A >= 60) {
    cout << "D" << "\n"; 
  }
  else {
    cout << "F" << "\n"; 
  }
  return 0;
}