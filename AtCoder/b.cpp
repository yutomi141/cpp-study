#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  int sum = 0;
  int r, l;
  
  cin >> N;
  
  for (int i = 0; i < N; i++){
    cin >> r >> l;
    sum += l - r + 1;
  }
  
  cout << sum << endl;
}