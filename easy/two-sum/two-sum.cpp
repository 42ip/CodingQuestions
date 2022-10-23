class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr(2);
        int flag = 0;
        for(int i= 0; i<nums.size();i++) {
            for(int j=0;j<nums.size();j++) {
                if(i!=j) {
                    if(nums[i]+nums[j]==target) {
                        arr[0] = i; 
                        arr[1] = j;
                        flag = 1;
                    }
                }
            }
            if(flag == 1)
                break;
        }
        return arr;
    }
};
