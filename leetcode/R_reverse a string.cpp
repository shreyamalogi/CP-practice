https://leetcode.com/problems/reverse-string/

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
	cout<<s[i]<<" ";
    }
};

//.
