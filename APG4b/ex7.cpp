// パターン1(オーバーフローのリスクあり)
/*
#include <iostream>  // 入出力 (cin, cout)
#include <string>    // 文字列 (string)
#include <vector>    // 配列 (vector)
using namespace std;

int main() {
  int a, b;
  
  cin >> a >> b;

  if ((a * b) % 2 == 0) {
    cout << "Even" << endl;
  }
  
  else {
    cout << "Odd" << endl;
  }
  
}
*/

// パターン2
#include <iostream>  // 入出力 (cin, cout)
#include <string>    // 文字列 (string)
#include <vector>    // 配列 (vector)
using namespace std;

int main() {
  int a, b;
  
  cin >> a >> b;
  
  if (a % 2 == 0 || b % 2 == 0) {
    cout << "Even" << endl;
  }
  else {
    cout << "Odd" << endl;
  }
}

