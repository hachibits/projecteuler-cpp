#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int facts[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
  vector<int> a(10);
  for (int i = 0; i < 10; i++) {
    a.push_back(i);
  }
  stringstream ans;
  long long n = 999999;
  for (int i = 9; i >= 0; i--) {
    ans << a[n / facts[i]];
    a.erase(a.begin() + n / facts[i]);
    n %= facts[i];
  }
  cout << ans.str();
  return 0;
}
