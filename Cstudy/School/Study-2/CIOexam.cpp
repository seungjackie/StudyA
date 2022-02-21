#include <stdio.h>

int main()
{
    // int c;
    // printf("Enter a value : ");
    // c = getchar();
    // printf("\n Your entered value : ");
    // // 캐릭터 출력
    // putchar(c);

    
    // printf("Input text : ");
    // gets(strVar);

    // strVar은 배열임으로 & 안해도 됌
    char strVar[100] = {0, };
    int iVar = 0;

    printf("Input text and number : ");
    scanf("%s %d", strVar, &iVar);

    printf("\n Your entered text and number : %s,%d", strVar, iVar);




    return 0;
}