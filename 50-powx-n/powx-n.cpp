class Solution {
public:
double powXN(double num,long long pow,double ans){
    if(pow<=0){
        return ans;
    }
    if(pow%2==1){
        ans=ans*num;
    }
    num=num*num;
    pow=pow/2;
    return powXN(num,pow,ans);
}
    double myPow(double x, int n) {
        long long pow=n;
        if(n==0){
            return 1;
        }
          double ans=1;

        if(pow<0){
            pow=-pow;
            return 1.0/powXN(x,pow,ans);
        }
        return powXN(x,pow ,ans);
        
    }
};