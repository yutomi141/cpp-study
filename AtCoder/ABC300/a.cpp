#include <iostream>
using namespace std;

int main() {
  int N,A,B;
  cin >> N >> A >> B;
  int total = A + B;
  
  int i;
  for (i = 1; i <= N; i++){
    int C;
    cin >> C;
    if (C == total){
      cout << i << endl;
      break;
    }
    else continue;
  }
  
}