#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;

    long long int a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    long long int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += a[i];
    }

    if (sum < 0)
    {
        cout << sum * -1 << endl;
    }
    else
    {
        cout << sum << endl;
    }

    return 0;
}
