#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s [i]>= '0' && s[i] <= '9')
            sum = sum + s[i]- '0';
            
    }

    cout << sum << endl;
    return 0;
}
