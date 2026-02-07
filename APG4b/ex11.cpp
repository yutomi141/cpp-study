#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  
  string op;
  int B;
  
  for (int i = 0; i < N;i++){
    cin >> op >> B;
    if (op == "+"){
      A += B;
    }
    else if (op == "-"){
      A -= B;
    }
    else if (op == "*"){
      A *= B;
    }
    else if (op == "/"){
      if (B == 0){
       cout << "error" << endl;
       break ;
      }
      else {
        A /= B;
      }
    }
    cout << i+1 << ":";
    cout << A << endl;
  }
}