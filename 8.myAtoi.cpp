#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int myAtoi(string str)
{
    while (*str.begin() == ' ')
    {
        str.erase(str.begin());
    }
    char flag = '+';
    if (str[0] == '-')
    {
        flag = '-';
        str.erase(str.begin());
    }
    else if (str[0] == '+')
        str.erase(str.begin());
    if (str.size() == 0 || str[0] < '0' || str[0] > '9')
        return 0;
    string s;
    int i = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        s += str[i];
        i++;
    }
    while (*s.begin() == '0')
    {
        s.erase(s.begin());
    }
    if (s.size() > 11)
    {
        if (flag == '-')
            return -pow(2, 31);
        return pow(2, 31) - 1;
    }
    long long ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += (s[i] - '0') * pow(10, s.size() - i - 1);
    }
    if (flag == '-')
        ans = 0 - ans;
    if (ans < -pow(2, 31))
        ans = -pow(2, 31);
    else if (ans > pow(2, 31) - 1)
        ans = pow(2, 31) - 1;
    return ans;
}

int main()
{
    string str;
    cin >> str;
    cout << myAtoi(str);
}