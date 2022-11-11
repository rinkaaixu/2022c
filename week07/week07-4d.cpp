#include <stdio.h>
int main()
{
    printf("請輸入數字: ");
    int n;
    scanf("%d", &n);
    while( n>0 )
    {
        printf("個位數是%d\n", n%2 );
        n=n/2;
    }

}
