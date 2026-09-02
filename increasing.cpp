
#include <iostream> 
#include <vector>

using namespace std;

int main(){

  long long n;
  cin >> n;
  
  
  vector<long long> nums;

  for (long long i = 0 ; i < n ; i++){
    long long temp;
    cin >> temp;
    nums.push_back(temp);
  }
  
  long long count = 0;
  for (long long i = 1 ; i < n ; i++ ){
    if (nums[i] < nums[i-1]){
      count+=(nums[i-1] - nums[i]);
      nums[i] = nums[i-1];
    }
  }

  cout << count;
  return 0;
};
