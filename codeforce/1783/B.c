#include <stdio.h>
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    int a;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        int arr[a][a];
        int p = 1;
        int q = a * a;
        for (int j = 0; j < a; j++)
        {

            for (int k = 0; k < a; k++)
            {

                if (c % 2 != 0)
                {

                    arr[j][k] = q;

                    q--;
                }
                else
                {

                    arr[j][k] = p;

                    p++;
                }
                c++;
            }
        }
        int b[a];
        for (int j = 0; j < a; j++)
        {
            if (j % 2 == 1)
            {
                for (int k = a - 1; k >= 0; k--)
                {
                    printf("%d ", arr[j][k]);
                }
            }
            else
            {
                for (int k = 0; k < a; k++)
                {
                    printf("%d ", arr[j][k]);
                }
            }

            printf("\n");
        }
    }

    return 0;
}