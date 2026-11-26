class Solution {
   public:
    bool isPalindrome(string s) {
        string filtered = "";
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }

        stack<char> stk;
        int midIndex = filtered.length() / 2;

        if (filtered.length() < 2)
         return true;

        for (int i = 0; i < filtered.length() / 2; i++)
         stk.push(filtered.at(i));

        if (filtered.length() % 2 != 0)
         midIndex += 1;

        for (int i = midIndex; i < filtered.length(); i++) { 
            if (stk.top() != filtered.at(i)) return false;
            stk.pop();
        }
        return true;
    }
};
