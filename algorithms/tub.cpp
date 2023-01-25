#include <iostream>

using namespace std;

int main() {
  int  n = 15;
  bool idf = true;

  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
        idf = false;
        break;
    }
  }

  if (idf) {
    cout << n << " soni tub\n";
  } else {
    cout << n << " soni tub emas\n";
  }
  
  return 0;
}