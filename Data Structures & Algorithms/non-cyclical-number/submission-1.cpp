class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=sqsum(n);
        while(slow!=fast){
            fast=sqsum(sqsum(fast));
            slow=sqsum(slow);
        }
        return fast==1;
    }
    int sqsum(int n){
        int sq=0;
        while(n){
            sq+=(n%10)*(n%10);
            n=n/10;
        }
        return sq;
    }
};
