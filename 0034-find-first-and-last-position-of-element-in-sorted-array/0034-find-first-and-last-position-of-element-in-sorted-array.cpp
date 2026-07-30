class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        if (n == 0)
            return {-1, -1};

        int lo = 0;
        int hi = n - 1;
        int str = -1;
        int end = -1;

        // Find first occurrence
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target) {
                if (mid == 0 || nums[mid - 1] != target) {
                    str = mid;
                    break;
                } else {
                    hi = mid - 1;   // Changed from lo = mid - 1
                }
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        lo = 0;
        hi = n - 1;

        // Find last occurrence
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target) {
                if (mid == n - 1 || nums[mid + 1] != target) {
                    end = mid;
                    break;
                } else {
                    lo = mid + 1;
                }
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return {str, end};
    }
};