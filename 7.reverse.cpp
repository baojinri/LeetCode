#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int reverse(int x)
{
    string s = to_string(abs(x));
    long long ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += (s[i] - '0') * pow(10, i);
    }
    if (x < 0)
        ans = 0 - ans;
    if (ans >= -pow(2, 31) && ans <= pow(2, 31) - 1)
        return ans;
    else
        return 0;
}

int main()
{
    int x;
    cin >> x;
    cout << reverse(x);
    return 0;
}