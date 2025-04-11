//week06-3.cpp
///Leetcode 1780.Check if Number is a Sum of Powers of Three
//題目看似難，但程式很簡單只要while、if即可
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){//只要n還有數字，就剝皮，剝掉3的倍數
            //n%3會剩下?? 剩一很好，剩0很好，但剩2不好
            if(n%3==2)return false;
            n=n/3;//剝掉3的倍數
        }
            return true;
    }
};
