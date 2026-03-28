#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N,M;
  cin >> N >> M;
  
  vector<int> C(M);
  for (int i = 0; i < N; i++){
    int A,B;
    cin >> A >> B;
    
    C.at(A - 1)--;
    C.at(B - 1)++;
  }
  
  for (int j = 0; j < M; j++){
    cout << C.at(j) << endl;
  }
}