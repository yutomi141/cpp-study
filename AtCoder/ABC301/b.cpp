#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  
  for (int i = 0; i < N - 1; i++){
    int cur = A.at(i);
    int target = A.at(i+1);
    
    while (cur != target){
      cout << cur << " ";
      
      if (cur < target){
        cur++;
      }
      else{
        cur--;
      }
    }
  }
  
  cout << A.at(N - 1) << endl;
  
}