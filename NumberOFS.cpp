class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        map<int, int> mp;
        for (int i = 0; i < students.size(); i++)
            mp[students[i]]++;

        for (int i = 0; i < sandwiches.size(); i++)
        {
            if (mp[sandwiches[i] != 0])
                mp[sandwiches[i]]--;
            else
                break;
        }

        return (mp[0] + mp[1]);
    }
};