#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, num;
  cin >> n;
  vector<int> vec(n + 1, -1);
  for (int i = 0; i < n - 1; i++) {
    cin >> num;
    vec[num] = 1;
  }

  for (int i = 1; i <= vec.size(); i++) {
    if (vec[i] == -1)
      cout << i;
  }
}