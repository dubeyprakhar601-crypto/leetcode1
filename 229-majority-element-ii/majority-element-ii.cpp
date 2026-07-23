class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> vec;
        int count =0;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] += 1;
            if (map[nums[i]] > nums.size() / 3) {
                if (count == 0) {
                    vec.push_back(nums[i]);
                    count++;
                } else {
                    if (nums[i] != vec[0]) {
                        vec.push_back(nums[i]);
                    }
                }
            }
            if (vec.size() == 2) {
                break;
            }
        }
        return vec;
    }
};