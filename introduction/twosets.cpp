#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long n;
  vector<int> v1, v2;
  cin >> n;
  long long sum = n * (n + 1) / 2;

  if (sum % 2 != 0) {
    cout << "NO";
  } else {
    cout << "YES" << endl;
    long long temp = sum / 2;
    while (n) {
      if (temp >= n) {
        v1.push_back(n);
        temp = temp - n;
      } else {
        v2.push_back(n);
      }
      n--;
    }
    cout << v1.size() << endl;
    for (auto it : v1)
      cout << it << " ";
    cout << endl << v2.size() << endl;
    for (auto it : v2)
      cout << it << " ";
  }
}