//week03-1.cpp �G�X�@��C++����
//
class Solution {
public:
    long long coloredCells(int n) {
        long long ans=n;//�n�h�g�o��A��Ʀr�ɯ�64�줸(�ܪ��ܪ����Ʀr)
        return n*n+(n-1)*(n-1);

    }
};
