#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter 1 for right angle triangle\nEnter 2 for inverted triangle: ");
    scanf("%d", &m);
    if(m<1 || m>2){
        printf("Invalid input");
        return 0;
    }
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (m == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    } else 
            if (m == 2)
    {
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
