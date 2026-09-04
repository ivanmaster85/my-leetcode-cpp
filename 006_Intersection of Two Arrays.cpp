class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Создаём множества из массивов (автоматически убираем повторы)
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        
        vector<int> result;  // сюда будем складывать результат
        
        // Проходим по первому множеству
        for (int num : set1) {
            // Если число есть во втором множестве — добавляем в результат
            if (set2.find(num) != set2.end()) {
                result.push_back(num);
            }
        }
        
        return result;
    }
};
