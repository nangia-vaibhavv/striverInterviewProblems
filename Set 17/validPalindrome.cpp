class Solution {
public:
    bool isPalindrome(string s) {
        // string temp;
        // for(int i=0;i<s.length();i++)
        // {
        //     if(s[i]==" " || s[i]==",")
        //     {
        //         i++;
        //     }
        //     else{
        //         temp+=s[i];
        //     }
        // }
        // return temp;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                if(isupper(s[i]))
                {
                   s[i]= tolower(s[i]);
                }
            }
//             if comma
            else{
                s.erase(s.begin()+i);
                i--;
            }
        }
        string temp=s;
        reverse(s.begin(), s.end());
        return s==temp;
    }
};