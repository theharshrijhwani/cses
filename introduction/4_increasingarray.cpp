#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, num;
  long long moves = 0;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  for (int i = 1; i < n; i++) {
    if (nums[i] >= nums[i - 1])
      continue;

    moves = moves + abs(nums[i] - nums[i - 1]);
    nums[i] = nums[i - 1];
  }

  cout << moves << endl;
}