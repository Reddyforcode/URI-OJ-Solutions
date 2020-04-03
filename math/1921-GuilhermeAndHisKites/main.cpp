#include <iostream>

typedef unsigned long long ll;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll res = ((n*(n-1LL))*0.5) - n;
    cout << res << "\n";
    return 0;
}
