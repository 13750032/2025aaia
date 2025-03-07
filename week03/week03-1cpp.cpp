//week03-1.cpp 二合一的C++版本
//
class Solution {
public:
    long long coloredCells(int n) {
        long long ans=n;//要多寫這行，把數字升級64位元(很長很長的數字)
        return n*n+(n-1)*(n-1);

    }
};
