#include <iostream>
#include <iomanip> // setprecision を使うために必要
#include <cmath>   // acos を使うために必要
using namespace std;

int main() {
  int D;
  cin >> D;
  
  const long double PI = acos(-1.0L);
  
  long double S = D * D * PI / 4;
  
  cout << fixed << setprecision(15);
  
  cout << S << endl;
}
