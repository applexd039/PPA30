#include <stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    if(iRow!=iCol)
    {
        printf("invalid");
        return;
    }
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i==j||i==1||j==iRow||j==1||i==iRow)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
            }
        }
      printf("\n");   
    }
   
}
int main() {
   int iValue1=0,iValue2=0;
    printf("Enter Element 1\n");
    scanf("%d",&iValue1);
    printf("Enter Element 2\n");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}