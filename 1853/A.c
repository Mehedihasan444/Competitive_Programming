#include <stdio.h>
int main()
{
    int test_case, number_of_element, shorted = 1, count = 0;
    scanf("%d", &test_case);
    while (test_case--)
    {
        scanf("%d", &number_of_element);
        int array[number_of_element];
        for (int i = 0; i < number_of_element; i++)
        {
            scanf("%d", &array[i]);
        }
        for (int i = 0; i < number_of_element-1; i++)
        {
           

            if (array[i] > array[i + 1] )
            {
                shorted = 0;
                break;
            }
        }
        if (shorted == 0)
        {
            printf("0\n");
        }
        else
        {

            while (1)
            {
               
                for (int i = 0; i < number_of_element; i++)
                {
                    
                    if (i == number_of_element - 1)
                    {
                        array[i] -= 1;
                    }
                    else{
                        array[i] += 1;
                    }
                    
                }
                 count++;
                if (array[number_of_element-2] > array[number_of_element- 1])
                {

                    printf("%d\n", count);
                
                    break;
                }
               
            }
           
        }
        shorted = 1;
        count=0;
    }

    return 0;
}