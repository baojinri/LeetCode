class Solution {

#include<string>

public:
    string convert(string s, int numRows) {
        string ans;
        int length=s.size();
        int flag=2*numRows-2;
        int i=0;
        if(numRows==1)
        {
            return s;
        }
        while(i<numRows)
        {
            if(i==0||i==numRows-1)
            {
                for(int j=i;j<length;j=j+flag)
                {
                    ans+=s[j];
                }
            }
            else
            {
                int leap=flag-i*2;
                for(int j=i;j<length;j=flag+j)
                {
                    ans+=s[j];
                    if(j+leap<length)
                        ans+=s[j+leap];
                }
            }
            i++;
        }
        return ans;
    }
};