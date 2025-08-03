#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    int lowest_num = A[0];
    int position = 0;
    for (int i = 0; i <= N; i++)
    {
        if (A[i] < lowest_num)
        {
            lowest_num = A[i];
            position = i;
        }  
    }
    cout << lowest_num << " " << position + 1 << endl;
    return 0;
}