class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int n=nums.size();
        int arr[n];
        arr[0]=nums[0];
        for(int i=1;i<n;i++) {
            arr[i]=max(nums[i], nums[i]+arr[i-1]);
        }
        return *max_element(arr,arr+n);
    }
};