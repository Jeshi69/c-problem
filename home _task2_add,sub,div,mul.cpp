#include <bits/stdc++.h>
using namespace std;
/*{
    long int a,b;
    scanf("%ld %ld", &a,&b);

    long int Add = a + b;
    long int sub = a - b;
    long int mul = a * b;
    long int div = a / b;

    printf("%ld + %ld = %ld\n", a, b, Add);
    printf("%ld - %ld = %ld\n", a, b, sub);
    printf("%ld * %ld = %ld\n", a, b, mul);
    printf("%ld / %ld = %ld\n", a, b, div);

    return 0;
}*/

int main()
{
    int taka;
    cin >> taka;

    if (taka >= 10000)
    {
        cout << "Gucci Bag" << endl;
    }
    else if (taka >= 5000)
    {
        cout << "Levis Bag" << endl;
    }
   else if (taka >= 10000 && taka > 20000)
    {
        cout << "Gucci Belt" << endl;
    }
    else
    {
        cout << "Something" << endl;
    }

    return 0;
}