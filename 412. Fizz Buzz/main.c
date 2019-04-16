#include <stdio.h>
#include <stdlib.h>

char** fizzBuzz(int n, int* returnSize);
int main()
{
    char** ans;
    int size;
    ans = fizzBuzz(1,&size);
    printf("%d\n%d\n",sizeof(char),sizeof(char*));
    for(int i=0;i<1;i++)
    {
        printf("%s\n",ans[i]);
    }
    system("PAUSE");
    return 0;
}
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** ans = (char**)malloc(n*sizeof(char*));//care sizeof(char) and sizeof(char*) are different
    *returnSize = n;
    for(int i=0;i<n;i++)
    {
        if(((i+1)%15)==0)
        {
            ans[i] = malloc(9);
            sprintf(ans[i],"FizzBuzz");
        }
        else if(((i+1)%5)==0)
        {
            ans[i] = malloc(5);
            sprintf(ans[i],"Buzz");
        }
        else if(((i+1)%3)==0)
        {
            ans[i] = malloc(5);
            sprintf(ans[i],"Fizz");
        }
        else
        {
           ans[i] = malloc(10);
            sprintf(ans[i],"%d",i+1);
        }

    }
    return ans;

}
