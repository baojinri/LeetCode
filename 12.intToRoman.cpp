#include <iostream>
#include <string>
using namespace std;

string intToRoman(int num)
{
    string ans, s = to_string(num);
    if (s.size() == 4)
    {
        int count = s[0] - '0';
        for (int i = 0; i < count; i++)
        {
            ans += 'M';
        }
        s.erase(s.begin());
    }
    if (s.size() == 3)
    {
        int count = s[0] - '0';
        if (count == 9)
        {
            ans += "CM";
        }
        else if (count >= 5)
        {
            ans += 'D';
            for (int i = 0; i < count - 5; i++)
            {
                ans += 'C';
            }
        }
        else if (count == 4)
        {
            ans += "CD";
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                ans += 'C';
            }
        }
        s.erase(s.begin());
    }
    if (s.size() == 2)
    {
        int count = s[0] - '0';
        if (count == 9)
        {
            ans += "XC";
        }
        else if (count >= 5)
        {
            ans += 'L';
            for (int i = 0; i < count - 5; i++)
            {
                ans += 'X';
            }
        }
        else if (count == 4)
        {
            ans += "XL";
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                ans += 'X';
            }
        }
        s.erase(s.begin());
    }
    int count = s[0] - '0';
    if (count == 9)
    {
        ans += "IX";
    }
    else if (count >= 5)
    {
        ans += 'V';
        for (int i = 0; i < count - 5; i++)
        {
            ans += 'I';
        }
    }
    else if (count == 4)
    {
        ans += "IV";
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            ans += 'I';
        }
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;
    cout << intToRoman(num);
}