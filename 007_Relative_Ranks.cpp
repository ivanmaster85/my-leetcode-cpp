class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        // Создаём копию и сортируем от большего к меньшему
        vector<int> sorted = score;
        sort(sorted.begin(), sorted.end(), greater<int>());
        
        // Словарь: балл  место в строковом формате
        unordered_map<int, string> rankMap;
        
        // Заполняем словарь для каждого балла
        for (int i = 0; i < sorted.size(); i++) {
            if (i == 0) {
                rankMap[sorted[i]] = "Gold Medal";
            } else if (i == 1) {
                rankMap[sorted[i]] = "Silver Medal";
            } else if (i == 2) {
                rankMap[sorted[i]] = "Bronze Medal";
            } else {
                rankMap[sorted[i]] = to_string(i + 1);
            }
        }
        
        // Проходим по исходному массиву и подставляем места
        vector<string> result;
        for (int s : score) {
            result.push_back(rankMap[s]);
        }
        
        return result;
    }
};
