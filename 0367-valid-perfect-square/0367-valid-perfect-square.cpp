class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo=0;
        int hi=num;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            long long sq=mid*mid;
            if(sq==num){
                return true;
            }
            else if(sq<num){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return false;
    }
};