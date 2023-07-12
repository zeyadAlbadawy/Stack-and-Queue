class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {

        int specifiedE = tickets[k];
        int frontD = 0;
        int backD = 0;
        int selfD = specifiedE;
        for (int i = 0; i < k; i++)
            frontD += min(specifiedE, tickets[i]);
        for (int i = k + 1; i < tickets.size(); i++)
            backD += min(specifiedE - 1, tickets[i]);

        return frontD + backD + selfD;
    }
};