#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int ans = 1;
  int cursor = 1;
  for (int i = 2; i < 1001; i += 2) {
    for (int j = 0; j < 4; j++) {
      cursor += i;
      ans += cursor;
    }
  }
  cout << ans;
  return 0;
}
