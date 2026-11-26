class Solution {
public:
    bool isAnagram(string s, string t) {
        std::multiset<char> abd;
        std::multiset<char> nay;

        for(char c: s){
            abd.insert(c);
        }

        for(char c: t){
            nay.insert(c);
        }

        return (abd == nay);


    }
};
