#include <iostream>
using namespace std;

int main(){
  int n ;
  cin >> n;
  if (n == 1){
    cout << 1;
    return 0;
  }
  int odd;

  if (n <= 3){
    cout << "NO SOLUTION";
    return 0;
  }
  
  else {
    if (n % 2 == 0) odd = n-1;

    for (int i = n-1; i > 0 ; i-=2 ){
      cout << i << " ";
    }
    for (int i = n ; i > 0 ; i-=2){
      cout << i << " ";
    }
  }

  return 0;
}
