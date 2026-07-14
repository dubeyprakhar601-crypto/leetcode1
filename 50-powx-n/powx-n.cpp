class Solution {
public:
    double myPow(double x, int n) {
        long long pow=n;

        if(pow<0){
            pow=-pow;
            x=1/x;
        }
        double ans=1;
        while(pow>0){

            if(pow%2==1){
                ans=ans*x;
            }
            x*=x;
            pow/=2;
        }
        return ans;

        
    }
};