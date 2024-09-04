// Problem: https://atcoder.jp/contests/abc220/tasks/abc220_a

#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  // validate inputs
  if (a < 1 || a > 1000 || b < 1 || b > 1000 || c < 1 || c > 1000 || a > b) {
    cout << "Invalid input " << endl;
    return 1;
    }
  
  bool found = false;
  for (int x = a; x <= b; x++) {
        if( x % c == 0) {
            cout << "Multiple of " << c << " is " << x << endl;
            found = true;
            break;
        }
    }
    
    if(!found) {
        cout << -1 << endl;
    }
    return 0;
}
