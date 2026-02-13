#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, K, x;
  cin >> N >> K;
  int sum = 0;
  
  for (int i = 0; i < N; i++){
    cin >> x;
    if (x > K - x){
      sum += (K - x) * 2;
    }
    else {
      sum += x * 2;
    }
  }
  
  cout << sum << endl;
}