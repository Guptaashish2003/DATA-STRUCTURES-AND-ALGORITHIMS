#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char topch = st.top();
                if (ch == ')' && topch == '(')
                {
                    st.pop();
                }
                else if
                    (ch == ']' && topch == '[')
                    {
                        st.pop();
                    }
                else if (ch == '}' && topch == '{')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string s = "{([])}";
    cout<<isValid(s)<<endl;

        return 0;
}