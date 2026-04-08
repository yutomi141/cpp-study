#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  
  
  vector<vector<int>> A(M, vector<int>(N));
  for(int i=0; i<M; i++) for(int j=0; j<N; j++) cin >> A[i][j];

  vector<vector<bool>> side_by_side(N+1, vector<bool>(N+1, false));
  for(int i = 0; i < M; i++){
    for (int j = 0; j < N - 1; j++){
      int person_x = A[i][j];
      int person_y = A[i][j+1];
      //隣あったのでフラグを立てる
      side_by_side[person_x][person_y] = true;
      side_by_side[person_y][person_x] = true;
    }
  }
  
  int count = 0;
  for (int i = 1; i <= N; i++){
    for (int j = i+1; j <= N; j++){
      if (!side_by_side[i][j]){
        count++;
      }
    }
  }
  
  cout << count << endl;
  
}