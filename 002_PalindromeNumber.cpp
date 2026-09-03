class Solution {
public:
    bool isPalindrome(int x) {
        // Если число отрицательное — не палиндром
        if (x < 0) {
            return false;
        }
        
        int original = x;   // запоминаем исходное число
        long rev = 0;       // сюда будем собирать перевернутое число
        
        while (x > 0) {
            int lastDigit = x % 10;   // берем последнюю цифру
            rev = rev * 10;           // сдвигаем влево (добавляем ноль)
            rev = rev + lastDigit;    // добавляем последнюю цифру
            x = x / 10;               // удаляем последнюю цифру из x
        }
        
        return original == rev;       // сравниваем
    }
};
