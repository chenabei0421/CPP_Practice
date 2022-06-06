//正
//小數點
//負
class Solution {
public:
    double myPow(double x, int n) {
        //Solution 1: Brute Force
        //Wrong1: n=-2
        //Wrong2: Time Limit Exceeded: x=1, n=2147483647
        //Wrong3: Time Limit Exceeded: x=2, n=-2147483647
        //double result=1.0;
        //if(x==1) return 1.0;  //for Wrong2
        
        //if(n>=0)
        //{
        //    while(n>0)
        //    {
        //        result*=x;
        //        n--;
        //    }
        //}
        //else  //n<0, for Wrong1
        //{
        //    while(n<0)
        //    {
        //        result*=x;
        //        n++;
        //    }
        //    result=1/result;
        //}
        //return result;
        
        //Solution 2: 以2次方來拆
        double result = 1.0;
        for (int i = n; i != 0; i /= 2) {
            if (i % 2 != 0) result *= x;
            x *= x;
        }
        return n < 0 ? 1 / result : result;
        
    }
};