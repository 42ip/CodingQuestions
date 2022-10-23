class Solution {
public:
    void reversearr(vector<int>& arr, int s, int e) {
        while(s<e) {
            int temp = arr[s];
            arr[s++] = arr[e];
            arr[e--] = temp;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reversearr(nums,0,nums.size() - k -1);
        reversearr(nums,nums.size() - k,nums.size()-1);
        reversearr(nums,0,nums.size()-1);
    }
};
