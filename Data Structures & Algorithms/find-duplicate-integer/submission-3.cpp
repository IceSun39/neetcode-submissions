class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0, fast = 0;
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];

            if(nums[slow] == nums[fast]){
                break;
            }
        }
        int inter = slow;
        slow = 0;
        while(nums[inter] != nums[slow]){
            inter = nums[inter];
            slow = nums[slow];
        }

        return nums[slow];
    }
};
