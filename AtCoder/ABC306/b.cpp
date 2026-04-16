#include <iostream>
using namespace std;

int main(){
  uint64_t sum = 0;
  
  uint64_t power = 1;
  for (int i = 1; i <= 64; i++){
    int A;
    cin >> A;
    sum += A * power;
    power *= 2;
  }
  
  cout << sum << endl;
}