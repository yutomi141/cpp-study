#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N,M;
  cin >> N >> M;
  
  if (N >= 2 * M -1){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
