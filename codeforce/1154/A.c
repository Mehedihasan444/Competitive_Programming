#include <stdio.h>
int main() {
    int a[4];
    for(int i=0;i<4;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int z=a[3]-a[0];
    int y=a[2]-z;
    int x=a[1]-z;
    
        printf("%d %d %d\n",x,y,z);
    
    
    return 0;
}