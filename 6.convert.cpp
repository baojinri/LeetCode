#include <iostream>
#include <string>
using namespace std;

string convert(string s, int numRows)
{
    if (numRows == 1)
        return s;
    int l = s.size() / numRows * (numRows - 1)+2;
    char c[numRows][l];
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < l; j++)
        {
            c[i][j] = ' ';
        }
    }
    int count = 0;
    int i = 0, j = 0;
    while (count < s.size())
    {
        while (i < numRows - 1 && count < s.size())
        {
            c[i][j] = s[count++];
            i++;
        }
        while (i > 0 && count < s.size())
        {
            c[i][j] = s[count++];
            i--;
            j++;
        }
    }
    string ans;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (c[i][j] != ' ')
                ans += c[i][j];
        }
    }
    return ans;
}

int main()
{
    string s;
    int n;
    cin >> s >> n;
    cout << convert(s, n);
}