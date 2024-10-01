// Problem: https://atcoder.jp/contests/abc240/tasks/abc240_a

#include <iostream>
using namespace std;

int main() {
  int a, b;
  while (true) { // Infinitr loop for continuous input 
    cout << "Values for a and b: ";
    cin >> a >> b;

    // if a & b are within the valid range 
    if (a <= b && a >=1 && a <= 10 && b >= 1 && b <= 10) {
      if (a == 1 && b == 10) {
        cout << "yes" << endl;
      }
      else if (b - a == 1) {
        cout << "yes" << endl;
      }
      else {
        cout << "no" << endl;
      }
    }
    else {
      cout << "Invalid input.." << endl;
    }
    if (a == 0 && b == 0) {
      break; // stop if a & b both equals 0 
    } 
  }
return 0;
}
