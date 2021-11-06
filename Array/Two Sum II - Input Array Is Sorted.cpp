//  https://leetcode.com/submissions/detail/581229315/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a = 0;
        int b = 0;
        int size = numbers.size();
        vector<int> pair;
        
        for(int i=0, j=size-1; i<j; ){
            if(numbers[i] + numbers[j] == target){
                pair.push_back(i+1);
                pair.push_back(j+1);
            }
            
            if(numbers[i] + numbers[j] < target){
                i++;
            }else{
                j--;
            }
        }
        
        return pair;
    }
};
