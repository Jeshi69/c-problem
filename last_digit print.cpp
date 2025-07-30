// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    cout << " Input :";
    cin >> n;
    long long result = n % 100;
    cout << setw(2) << setfill('0') << "Output :" << result << endl;
    return 0;
}