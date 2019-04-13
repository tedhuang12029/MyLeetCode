#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int** generate(int numRows, int** columnSizes);
int main()
{
    int** ans;
    int** size = (int**)malloc(5*sizeof(int));
    ans = generate(5,size);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<size[0][i];j++)
        {
            printf("%d",ans[i][j]);
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;

}
int** generate(int numRows, int** columnSizes) {
    int j=0;
    int** ans = (int**)malloc(numRows*sizeof(int*));
    *columnSizes = (int*)malloc(numRows*sizeof(int));
    for(int i=0;i<numRows;i++)
    {
        columnSizes[0][i]=i+1;
        ans[i] = (int*)malloc((i+1)*sizeof(int));
        ans[i][0]=1;
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j==i)
            {
                ans[i][j] = 1;
            }
            else
            {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
    }
    return ans;
}
