#include <stdio.h>
int main()
{
    printf("�п�J�Ʀr: ");
    int n;
    scanf("%d", &n);
    while( n>0 )
    {
        printf("�Ӧ�ƬO%d\n", n%2 );
        n=n/2;
    }

}
