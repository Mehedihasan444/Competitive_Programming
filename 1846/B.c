
#include <stdio.h>

int main()
{
    int t, c = 0;
    scanf("%d", &t);
    while (t--)
    {
        char array[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf(" %c", &array[i][j]);
            }
        }
        if ((array[0][0] == array[1][1] && array[1][1] == array[2][2]) && array[0][0] != '.')
        {
            printf("%c\n", array[0][0]);
            c = 1;
        }
        else if ((array[0][2] == array[1][1] && array[1][1] == array[2][0]) && array[0][2] != '.')
        {
            printf("%c\n", array[0][2]);
            c = 1;
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                if ((array[i][0] == array[i][1] && array[i][1] == array[i][2]) && array[i][0] != '.')
                {
                    printf("%c\n", array[i][0]);
                    c = 1;
                    break;
                }
                else if ((array[0][i] == array[1][i] && array[1][i] == array[2][i]) && array[0][i] != '.')
                {
                    printf("%c\n", array[0][i]);
                    c = 1;
                    break;
                }
            }
        }

        if (c == 0)
        {
            printf("DRAW\n");
        }
        c = 0;
    }

    return 0;
}