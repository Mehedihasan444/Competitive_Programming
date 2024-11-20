#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{

    int t, a[2][2], count = 0;
    scanf("%d", &t);
    while (t--)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        if (a[0][0] < a[1][0] && a[0][1] < a[1][1] && a[0][0] < a[0][1] && a[1][0] < a[1][1])
        {
            count = 1;
            printf("YES\n");
        }
        else
        {
            if (count == 0)
            {
                count = 1;

                for (int k = 0; k < 3; k++)
                {
                    // Tranposing the matrix
                    for (int i = 0; i < 2; i++)
                    {
                        for (int j = i + 1; j < 2; j++)
                        {
                            swap(&a[i][j], &a[j][i]);
                        }
                    }

                    // Reversing each row of the matrix
                    for (int i = 0; i < 2; i++)
                    {
                        for (int j = 0; j < 2 / 2; j++)
                        {
                            swap(&a[i][j], &a[i][2 - j - 1]);
                        }
                    }

                    if (a[0][0] < a[1][0] && a[0][1] < a[1][1] && a[0][0] < a[0][1] && a[1][0] < a[1][1])
                    {
                        printf("YES\n");
                        count = 0;
                        break;
                    }
                }
            }

            if (count == 1)
            {
                printf("NO\n");
            }
        }
        count = 0;
    }

    return 0;
}


/* #include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int is_beautiful(int a[2][2]) {
    if (a[0][0] < a[1][0] && a[0][1] < a[1][1] && a[0][0] < a[0][1] && a[1][0] < a[1][1])
        return 1;
    return 0;
}

int main() {
    int t, a[2][2], count = 0;
    scanf("%d", &t);
    
    while (t--) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        
        if (is_beautiful(a)) {
            printf("YES\n");
        } else {
            for (int k = 0; k < 3; k++) {
                // Rotate the matrix 90 degrees clockwise.
                for (int i = 0; i < 2; i++) {
                    for (int j = i + 1; j < 2; j++) {
                        swap(&a[i][j], &a[j][i]);
                    }
                }

                // Reverse each row of the matrix.
                for (int i = 0; i < 2; i++) {
                    swap(&a[i][0], &a[i][1]);
                }

                if (is_beautiful(a)) {
                    printf("YES\n");
                    break;
                }
            }

            if (!is_beautiful(a)) {
                printf("NO\n");
            }
        }
    }

    return 0;
}
*/