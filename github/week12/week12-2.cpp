///week12-2.cpp
#include <stdio.h>
int main()
{///�}�C���ŧi,�k�䦳��������,�S�g������0
    int a[30] = {0, 1};///�̭��񵪮�
    printf("1 ");
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d", a[i] );
    }
}
