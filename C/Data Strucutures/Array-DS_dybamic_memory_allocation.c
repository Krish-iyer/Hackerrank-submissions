#include<stdio.h>
#include<stdlib.h>
int main()
{
  int size,i;
  int *arr;
  scanf("%d\n",&size);
  arr=malloc(size*sizeof(int));
  for(i=0;i<size;i++)
    scanf("%d",(arr+i));
  for(i=(size-1);i>=0;i--)
    printf("%d ",*(arr+i));
  return 0;
}
