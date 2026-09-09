#include <iostream> 

using namespace std;




void solve(long long x, long long y){
  long long m = max(x, y);
  long long diag = m*(m - 1) + 1;

  if (x == y) {
    cout << diag << endl;
    return;
  }

   if ( m % 2 == 0){
    if (x > y){
      cout << m*m - y + 1 << endl;
      return;
    }
    if (x < y){
      cout << diag - (m - x) << endl;
      return;
    }
  } 

   if ( m % 2 == 1){
     if (x > y){
      cout << diag - (m - y) << endl;
      return;
    }
    if (x < y){
      cout << diag + (m - x) << endl;
      return;
     }
   }
}


int main(){
  int t; 
  cin >> t;

  while (t--){
    long long x , y;
    cin >> x;
    cin >> y;

    solve(x, y);
  }
  return 0;
}
