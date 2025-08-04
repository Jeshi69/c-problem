#include <bits/stdc++.h>
using namespace std;
/*int main()
{
string s;
getline(cin, s,'\\');
cout << s <<endl;
}*/
int main()
{
    string s;
     getline (cin,s);
    for (int i = 0; i < s.length(); i++)
    {
      if(s[i] == '\\') 
         break;
         cout << s [i];
    }
    
}