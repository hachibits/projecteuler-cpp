#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int facts[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    vector<int> l; 
    for (int i = 0; i < 10; i++) {
        l.push_back(i);
    }

    stringstream ans;
    int n = 999999;
    for (int i = 9; i >= 0; i--) {
        ans << l.at(n/facts[i]);
        l.erase(l.begin()+n/facts[i]);
        n %= facts[i];
    }

    cout << ans.str();
    return 0;
}
