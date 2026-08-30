class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);

        string word;
        stringstream ss(s);

        while (ss >> word) {
            int pos = word.back() - '0';
            word.pop_back();
            words[pos] = word;
        }

        string ans = "";

        for (int i = 1; i <= 9; i++) {
            if (words[i] != "") {
                if (!ans.empty()) ans += " ";
                ans += words[i];
            }
        }

        return ans;
    }
};