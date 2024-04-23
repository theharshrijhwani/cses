#include <iostream>
using namespace std;

int main() {
    long long n, zeros = 0;
    cin >> n;
    while (n) {
        zeros += n / 5;
        n /= 5;
    }

    cout << zeros << endl;
}