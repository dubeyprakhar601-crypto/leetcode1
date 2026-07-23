class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int ,int>map;
        unordered_set<int>s;
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]+=1;
            if(map[nums[i]]>nums.size()/3){
                s.insert(nums[i]);
            }
            if(s.size()==2){
                break;
            }

        }
        for(auto it:s){
            vec.push_back(it);
        }
        return vec;
        
    }
};