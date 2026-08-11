class Solution {
public:
    int reverse(int x) {
        const int MAX=INT_MAX;
        const int MIN=INT_MIN;
        int res=0;
        while(x){
            int d=x%10;
            x=x/10;
            if((res>MAX/10)||(res==MAX/10&&d>MAX%10)){
                return 0;
            }
            if((res<MIN/10)||(res==MIN/10&&d<MIN%10)){
                return 0;
            }
            res=res*10+d;
        }

        return res;
    }
};
