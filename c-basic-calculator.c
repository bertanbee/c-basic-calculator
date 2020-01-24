#include <stdio.h>
#include <stdlib.h>
int main()
{
    int fn;
    int sn;
    int ln;
    printf("A nice calculator!!! \nEnter your first number: ");
    scanf("%d", &fn);
    printf("Enter your second number: ");
    scanf("%d", &sn);
    printf("Enter your last number: ");
    scanf("%d", &ln);
    printf("Your result is %d \n", fn + sn + ln);
    printf("Press ENTER to exit...");
    int exiter;
    scanf("%d", &exiter);
}
