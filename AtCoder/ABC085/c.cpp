#include <iostream>
using namespace std;

int main(){
  int N,Y;
  cin >> N >> Y;
  int res10000 = -1, res5000 = -1, res1000 = -1;
  
  for(int x = 0; x <= N; x++){
    for(int y = 0; y + x <= N; y++){
      int z = N - x - y;
      int total = 10000 * x + 5000 * y + 1000 * z;
      if (total == Y){
        res10000 = x;
        res5000 = y;
        res1000 = z;
      }
    }
  }
  
  cout << res10000 << " " << res5000 << " " << res1000 << endl;
}