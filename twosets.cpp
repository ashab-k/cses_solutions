#include <iostream> 
#include <vector>


using namespace std;

int main(){
  long long n;
  cin >> n;

  long long product = n * (n + 1) / 2;

  if ( product % 2 == 1  ) {
    cout << "NO";
    return 0;
  }

  vector<int> nums(n);
  for (int i = 0; i < n ; i++){
    nums[i] = i+1;
  }

  vector<int> set1;
  vector<int> set2;

  if (n % 2 == 0){
    int i = 0;
    int j = n - 1;

    while (i < j){
      if (i % 2 == 0) {
        set1.push_back(nums[i++]);
        set1.push_back(nums[j--]);
      }   

      if (i % 2 == 1){
        set2.push_back(nums[i++]);
        set2.push_back(nums[j--]);
      }
    }
      cout << "YES" << endl;

      cout << n/2 << endl;

      for (int c : set1 ){
        cout << c << " ";
      }
      cout << endl;
      cout << n / 2 << endl;

      for (int c : set2 ){
        cout << c << " ";
      }
    
    return 0;
  }


  if ( n % 2 == 1){
    set1.push_back(1);
    set1.push_back(2);
    set2.push_back(3);

    int i = 3;
    int j = n - 1;
    int flag = 0;
    while (i < j){
      if (flag == 0) {
        set1.push_back(nums[i++]);
        set1.push_back(nums[j--]);
      }   

      else {
        set2.push_back(nums[i++]);
        set2.push_back(nums[j--]);
      }

      flag = 1 - flag;
    }

      cout << "YES" << endl;

      cout << n/2 + 1 << endl;

      for (int c : set1 ){
        cout << c << " ";
      }
      cout << endl;
      cout << n / 2 << endl;

      for (int c : set2 ){
        cout << c << " ";
      }
    return 0;
  }

  return 0;

}
