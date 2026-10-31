class Solution {
public:
    string reverse(string s){
        int i = 0;
        int n = s.length();
        while(i < n/2){
            swap(s[i], s[n-i-1]);
            i++;
        }
        return s;
    }
    bool isPalindrome(string s) {
        string newstr = "";
        for(auto x : s){
            if(x >= 'A' && x <= 'Z' || 
               x >= 'a' && x <= 'z' ||
               x >= '0' && x <= '9'){
                newstr+= tolower(x);
            }
        }
        string rev = reverse(newstr);
        if(newstr != rev) 
            return false;
        
        return true;
    }
};