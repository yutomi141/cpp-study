#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, K;
  int ans = 1;
  cin >> N >> K;
  
  for (int i = 0; i < N; i++){
    if (ans * 2 < ans + K){
      ans *= 2; //操作A
    }
    else {
      ans += K; //操作B
    }
  }
  cout << ans << endl;
}
  
