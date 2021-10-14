// The aprroach to find if the paranthesis of a expression is valid or not using stack 
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        bool is = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if (s[i] == ')')
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                {
                    is = false;
                    break;
                }
            }
            else if (s[i] == '}')
            {
                if (!st.empty() && st.top() == '{')
                    st.pop();
                else
                {
                    is = false;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                {
                    is = false;
                    break;
                }
            }
        }
        if (!st.empty())
            return false;
        else
            return is;
    }
};

int main()
{
  string s; 
  cin>>s;
  Solution sln;
  if ( sln.isValid(s) )
  {
    cout<<"VALID";
  } else {   
           cout<<"INVALID";
         }
  
  return 0;
}


