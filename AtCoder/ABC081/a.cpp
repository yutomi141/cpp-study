#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int total = 0;
  
  cin >> s;
  
  for (int i = 0; i < 3; i++){
    if (s.at(i) == '1'){
      total += 1;
    }
  }
  
  cout << total << endl;
}