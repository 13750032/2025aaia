///week11-1.cpp
///�禡/��� function
#include <stdio.h>
///�e�� �w�q �禡
///�e�Xint���
///�e�i�h���a�A���b
int addnum(int a,int b)
{
    ("�禡addnum()�̡A�o��Ѽ�a:%d b:%d\n",a,b);
    int ans=a+b;
    printf("��X����%d�nreturn�X�h��\n",ans);
    return ans;///���X�Ӫ����G�ǥX�h
}
int main(){
    ///�D�n���禡�B�D�{��
    printf("�bmain()�I�s�ϥ�addnum()\n");
    int ans=addnum(2,3);
    printf("���쪺���׬O:%d\n",ans);
}
