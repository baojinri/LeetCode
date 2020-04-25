#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s)
{
    int ans = 0;
    while (*s.begin() == 'M')
    {
        ans += 1000;
        s.erase(s.begin());
    }
    int temp = 0;
    while (*s.begin() == 'C')
    {
        temp += 100;
        s.erase(s.begin());
    }
    if (s[0] == 'M')
    {
        ans += 1000 - temp;
        s.erase(s.begin());
    }
    else if (s[0] == 'D')
    {
        ans += 500 - temp;
        s.erase(s.begin());
    }
    else
        ans += temp;
    temp = 0;
    while (*s.begin() == 'C')
    {
        ans += 100;
        s.erase(s.begin());
    }
    while (*s.begin() == 'X')
    {
        temp += 10;
        s.erase(s.begin());
    }
    if (s[0] == 'C')
    {
        ans += 100 - temp;
        s.erase(s.begin());
    }
    else if (s[0] == 'L')
    {
        ans += 50 - temp;
        s.erase(s.begin());
    }
    else
        ans += temp;
    temp = 0;
    while (*s.begin() == 'X')
    {
        ans += 10;
        s.erase(s.begin());
    }
    while (*s.begin() == 'I')
    {
        temp += 1;
        s.erase(s.begin());
    }
    if (s[0] == 'X')
    {
        ans += 10 - temp;
        s.erase(s.begin());
    }
    else if (s[0] == 'V')
    {
        ans += 5 - temp;
        s.erase(s.begin());
    }
    else
        ans += temp;
    for(int i=0;i<s.size();i++)
    {
        ans+=1;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << romanToInt(s);
    return 0;
}