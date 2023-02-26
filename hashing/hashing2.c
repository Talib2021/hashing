#include<stdio.h>
int main()
{
  int i,j,k,tempt,n,num;
  int a[50],p[50];
  for (i=0;i<=n;i++)
  {
    p[i]=0;
  }
  printf("inter size of arry;");
  scanf("%d",&n);

  printf("enter array elements/n");
for(i=0;i<=n;i++){
    scanf("%d",& tempt);
    k=tempt%50;
    for(j=0;j<50;j++){
  if(p[(k+j)%50]==0){
    a[(k+j)%50]=tempt;
    p[(k+j)%50]=1;
    break;
  }
    }
  }
  printf("enter no you want to search/n");
  scanf("%d",& num);
  k=num%50;
  for(i=0;i<=50;i++){
    if(p[(k+i)%50]==0){
      printf("%d is not present in array/n",num);
      break;
    }
    else if(a[(k+i)%50]==num){
      printf("%d is at index %d/n",num,(k+i)%50);
      printf("number is found after %d probing",j+1);
      break;
    }
  }
 return 0;

}