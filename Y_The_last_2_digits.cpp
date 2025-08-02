#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long mul = A % 100;
    mul = (mul * (B % 100)) % 100;
    mul = (mul * (C % 100)) % 100;
    mul = (mul * (D % 100)) % 100;

    cout << setw(2) << setfill('0') << mul << endl;
    return 0;
}
