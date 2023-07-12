class Solution {
public:
    string removeDuplicates(string s) {

    stack<char> st;
    stack<char> st1;
    string t;
        
    for (int i = 0; i < s.length(); i++)
    {

        if (i == 0)
            st.push(s[0]);

        else
        {
            if(!st.empty())
              if (s[i] == st.top())
                st.pop();
              else
                st.push(s[i]);
            else
             st.push(s[i]);
        }
    }

    int size = st.size();

    for (int i = 0; i < size; i++)
    {
        st1.push(st.top());
        st.pop();
    }

    size = st1.size();
    for (int i = 0; i < size; i++)
    {
        t.push_back(st1.top());
        st1.pop();
    }
        return t;
    }
};