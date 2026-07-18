class Solution {
public:
    void reverse(vector<int>& nums, int left, int right) {
        int i = left;
        int j = right;
        while (i < j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int swpIdx = -1;

        for (int i = n - 1; i >= 1; i--) {
            if (nums[i] > nums[i - 1]){
            swpIdx = i - 1;
            break;
            }
        }
        if (swpIdx == -1) {
            reverse(nums, 0, n - 1);
            return ;
        }
        for (int j = n - 1; j >swpIdx; j--) {
            if (nums[j] > nums[swpIdx]) {
            swap(nums[swpIdx], nums[j]);
                break;
            }
        }
        
        reverse(nums, swpIdx + 1, n - 1);
    }
};