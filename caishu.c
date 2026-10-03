#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number = rand();
    number = number % 100 + 1;
    int a = 0;
    int count = 0;
    do
    {
        printf("1-100随机数请猜测！\n");
        scanf("%d", &a);
        count++;
        if (a > number)
        {
            printf("你猜大了\n");
        }
        else if (a < number)
        {
            printf("你猜小了\n");
        }
    } while (a != number);
    printf("你猜对了！用来%d次猜中\n", count);
    return 0;
}
