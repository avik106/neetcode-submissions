class Solution {
public:
    bool isPalindrome(string s) {
        string check="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])!=0){
                check+=tolower(s[i]);
            }
        }
        int low=0;
        int high=check.length()-1;
        while(low<high){
            if(check[low]!=check[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};
