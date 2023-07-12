class Solution {
public:
    string removeOuterParentheses(string s) {

        string t;
        int counter = 0;
        bool flag = true;

        for(int i = 0 ; i < s.length() ; i++){

            if(s[i] == '(')
               counter++;
            else if (s[i] == ')')
               counter--;
            
            if(flag == true && counter == 1)
              {
                  flag = false;
                  continue;
              } else if (flag == false && counter == 0){
                  flag = true;
                  continue;
              }

              t.push_back(s[i]);
        }

        return t;
    }
};