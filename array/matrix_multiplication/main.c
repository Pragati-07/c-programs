#include <stdio.h>
#include <stdlib.h>
#define ROW1 1
#define COL1 2
#define ROW2 2
#define COL2 3

int main()
{
    int mat1[ROW1][COL1],mat2[ROW2][COL2],mat3[ROW1][COL2],i,j,k;
    printf("Enter Matrix 1 (%d X %d) row-wise",ROW1,COL1);
    for(i=0;i<ROW1;i++)
        for(j=0;j<COL1;j++)
            scanf("%d",&mat1[i][j]);
    printf("\nEnter Matrix 2 (%d X %d) row-wise",ROW2,COL2);
    for(i=0;i<ROW2;i++)
        for(j=0;j<COL2;j++)
            scanf("%d",&mat2[i][j]);
    for(i=0;i<ROW1;i++)
        for(j=0;j<COL2;j++)
        {
            mat3[i][j]=0;
            for(k=0;k<COL1;k++)
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
        }
    printf("\nResultant matrix is :\n");
    for(i=0;i<ROW1;i++)
    {
        for(j=0;j<COL2;j++)
            printf("%d\t",mat3[i][j]);
        printf("\n");
    }
    return 0;
}
