///week08-1.cpp 泡泡排序法 Bubble Sort
#include <stdio.h>
int main(){
    ///int a[10]={3,0,1,8,7,2,5,4,6,9};
    int a[10]={9,8,7,6,5,4,3,2,1,0};
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");

    for(int k=0;k<9;k++){///最大的九個數字都找到，就完成
        for(int i=0;i<9;i++){///10個人，兩兩相比 9次
            if(a[i]>a[i+1]){///大小不對，就交換
            int temp=a[i];///老師上課用2杯水交換
            a[i]=a[i+1];///Τ有押韻
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    }
}
