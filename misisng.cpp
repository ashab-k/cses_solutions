#include <iostream>

int main(){
  long long n;
  std::cin >> n;
  long long temp;
  long long total = 0;

  for (int i = 0 ; i < n - 1 ; i++){ 

    std::cin >> temp;
    total+= temp;
  }
  long long sum = n * (n + 1) / 2;
  
    
  long long missing = sum - total;
  std::cout << missing;
}
