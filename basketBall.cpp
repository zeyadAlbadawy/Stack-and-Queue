class Solution
{
public:
    int stringToInt(std::string str)
    {
        return stoi(str);
    }
    int calPoints(vector<string> &operations)
    {
        stack<int> st;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] != "C" && operations[i] != "D" && operations[i] != "+")
            {
                int number = stringToInt(operations[i]);
                st.push(number);
            }
            else if (operations[i] == "C" && !st.empty())
                st.pop();
            else if (operations[i] == "D" && !st.empty())
            {
                int temp = st.top();
                temp = temp * 2;
                st.push(temp);
            }
            else if (operations[i] == "+" && !st.empty())
            {
                int modify = st.top();
                st.pop();
                int race = st.top();
                st.pop();
                st.push(race);
                st.push(modify);
                st.push(modify + race);
            }
        }

        int sum = 0;
        while (!st.empty())
        {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};