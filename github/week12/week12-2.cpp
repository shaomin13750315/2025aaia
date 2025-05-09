///week12-2.cpp
#include <stdio.h>
int main()
{///陣列的宣告,右邊有它的價值,沒寫的都放0
    int a[30] = {0, 1};///裡面放答案
    printf("1 ");
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d", a[i] );
    }
}
