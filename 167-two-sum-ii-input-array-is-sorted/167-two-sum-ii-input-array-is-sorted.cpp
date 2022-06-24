class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2);
    int i = 0, j(numbers.size()-1);
    while(i < j)
    {
        if(numbers[i] + numbers[j] > target) j--;
        else if(numbers[i] + numbers[j] < target) i++;
        else 
        {
            res[0] = i+1;
            res[1] = j+1;
            break;
        }
    }
    return res;
    }
};