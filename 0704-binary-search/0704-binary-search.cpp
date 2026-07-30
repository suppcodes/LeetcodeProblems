class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int mid=(lo+hi)/2;
        for(int i=0;i<n;i++){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                lo=mid+1;
                mid=(lo+hi)/2;
            }
            else if(nums[mid]>target){
                hi=mid-1;
                mid=(lo+hi)/2;
            }
        }
        return -1;
    }
};