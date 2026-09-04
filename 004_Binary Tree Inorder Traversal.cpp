class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;          // сюда будем складывать значения
        inorderHelper(root, result); // запускаем обход
        return result;               // возвращаем результат
    }
    
    void inorderHelper(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {       // если узла нет выходим
            return;
        }
        
        inorderHelper(node->left, result);  // сначала левое поддерево
        result.push_back(node->val);        // потом сам узел
        inorderHelper(node->right, result); // потом правое поддерево
    }
};
