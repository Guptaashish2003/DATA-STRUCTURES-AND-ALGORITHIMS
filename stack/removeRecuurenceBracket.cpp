#include <iostream>
#include <stack>
using namespace std;
void redundantParan(string s)
{
    stack<char> st;
    bool ans;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(')
        {
            st.push(ch);
        }

        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }

        else if (ch == ')')
        {
            if (st.top() == '(')
            {
                ans= true;
            }

            while (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
            {
                st.pop();
            }
            st.pop();
        }
        
    }
    cout<<ans<<endl;
}

int main()
{
    string s = "(a+b)";
    redundantParan(s) ;
    return 0;
}