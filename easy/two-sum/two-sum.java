class Solution {
    public int[] twoSum(int[] nums, int target) {
        // hashmap to keep track of integers (who's complementary number is not found) and it's index
        HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
        
        for(int i=0; i<nums.length; i++){
            // find the required number for the given number
            Integer req_num = target - nums[i];
            
            // checking if it's there in the list
            if(hm.containsKey(req_num)){
                // if yes, return the index of that number and the given number
                int[] result = {hm.get(req_num), i};
                return result;
            }
            
            // else put the new number and it's index into the list
            hm.put(nums[i], i);
        }
        
        // if nothing found return [-1,-1]
        int[] result = {-1, -1};
        return result;
    }
}
