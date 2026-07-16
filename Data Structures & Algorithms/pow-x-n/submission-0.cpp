class Solution {
public:
    double myPow(double x, int n) {
        if(x==0)return 0;
        if(n==0)return 1;
        long power=abs(long(n));
        double res=1;
        while(power){
            if(power&1){
                res*=x;
            }
            x*=x;
            power=power/2;
        }
        if(n<0){
            return 1/res;
        }
        return res;
    }
};
