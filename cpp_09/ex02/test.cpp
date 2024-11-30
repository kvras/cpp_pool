#include <iostream>
#include <stack>
#include<string>

using namespace std;

int main()
{
    string str = "< em>< /em>";

    int i = 0;
    stack<string> st;

    while (str[i])
    {
        if (str[i] == '>')
        {
            int k = i;
            while (k >= 0 && str[k] != '<')
                k--;
            if (str[k + 1] == '/')
            {
                string s = "";
                int j = i - 1;
                while (j >= 0 && str[j] != '<')
                    j--;
                if (str[j] == '<')
                    j++;
                if (str[j] == '/')
                    j++;
                while (str[j] && str[j] != '>')
                {
                    s += str[j];
                    j++;
                }
                if (st.empty())
                {
                    cout << "false\n";
                    return (0);
                }
                if (st.top() != s)
                {
                    cout << st.top() << endl;
                    return (0);
                }
                st.pop();
            }
            else
            {
                string s = "";
                int j = i - 1;
                while (j >= 0 && str[j] != '<')
                    j--;
                if (str[j] == '<')
                    j++;
                while (str[j] && str[j] != '>')
                {
                    s += str[j];
                    j++;
                }
                st.push(s);
            }
        }
        i++;
    }

    cout << "true\n";
}