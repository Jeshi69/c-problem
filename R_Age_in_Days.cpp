#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    cin >> d;
    int years = d / 365;
    d = d % 365;

    int months = d / 30;
    int days = d % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
}