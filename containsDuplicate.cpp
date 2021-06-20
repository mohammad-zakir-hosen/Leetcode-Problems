217. Contains Duplicate
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int counter=0;
        int previous, current;
        for(auto i = nums.begin(); i!= nums.end(); i++){
            counter++;
            
            if (counter>1){
                current = *i;
                i--;
                previous = *i;
                i++;
                
                if (previous == current)
                    return true;
            }
        }
        return false;
    }
};
