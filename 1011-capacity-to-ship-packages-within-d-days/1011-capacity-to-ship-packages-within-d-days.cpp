class Solution {
public:
    bool check(int mid,vector<int>& weights, int days){
        int m=mid;
        int count=1;
        int n=weights.size();
        for(int i=0;i<n;i++){
            if(weights[i]<=m){
                m-=weights[i];
            }
            else{
                count++;
                m=mid;
                m-=weights[i];
            }
        }
        if(count>days) return false;
        else return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int max=INT_MIN;
        int n=weights.size();
        for(int i=0;i<n;i++){
             sum+=weights[i];
            if(weights[i]>max) max=weights[i];
        }
        int lo=max;
        int hi=sum;
        int minCapacity=sum;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,weights,days)){
                minCapacity=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return minCapacity;
    }
};