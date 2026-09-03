class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) { // для i типа int, не выходим за границу массива, проходим по каждому индексу массива.
            for (int j = i + 1; j < nums.size(); j++) { // для j типа int бери следующий элемент после текущего,  увеличь j на 1
                if (nums[i] + nums[j] == target) { // проверка
                    return {i, j};
                }
            }
        }
        return {};
    }
};
