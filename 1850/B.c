#include <stdio.h>
int main()
{
    int test_case, n, w, q;
    scanf("%d", &test_case);
    while (test_case--)
    {
        scanf("%d", &n);
        int h_quality_response = 0, h_quality, b = 0;
        for (int i = 0; i < n; i++)
        {

            scanf("%d %d", &w, &q);

            if (w <= 10)
            {
                b++;
                if (b == 1)
                {
                    h_quality = q;
                    h_quality_response = i + 1;
                }
                if (q > h_quality)
                {
                    h_quality = q;
                    h_quality_response = i + 1;
                }
            }
        }
        printf("%d\n", h_quality_response);
    }
    return 0;
}