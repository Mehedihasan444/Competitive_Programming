#include <stdio.h>
int main()
{
    int test_case, row, column, temp = 0;
    char s[8][8];
    scanf("%d", &test_case);
    while (test_case--)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                scanf(" %c", &s[i][j]);
            }
        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (s[i][j] != '.')
                {
                   
                      printf("%c", s[i][j]);
                }
            }
           
        }
       

        printf("\n");
    }
    return 0;
}
