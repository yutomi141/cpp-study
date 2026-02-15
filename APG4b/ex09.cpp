#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int a, b, x;
  cin >> x >> a >> b;
  
  x++;
  cout << x << endl;
  
  x *= (a+b);
  cout << x << endl;
  
  x *= x;
  cout << x << endl;
  
  x --;
  cout << x << endl;
}