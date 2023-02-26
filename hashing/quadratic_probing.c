#include<stdio.h>

int main()
{   
    int n, i, j, k , temp, arr[50], p[50], num;
    for(i=0; i<50; i++){
    p[i]=0;
    }
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
    scanf("%d", &temp);
    for(j=0; j<50; j++){
    if(p[(temp%50)+(j*j)]==0){
    arr[(temp%50)+(j*j)]=temp;
    p[(temp%50)+(j*j)]=1;
    break;
    }
    }
    }
    
    printf("Enter number you want to search:");
    scanf("%d", &num);
    for(j=0; j<50; j++){
    if(p[(num%50)+(j*j)]==0){
    printf("Number is not in array");
    break;
    }
    else if(p[(num%50)+(j*j)]==1){
    if(arr[(num%50)+(j*j)]==num){
    printf("%d is present at index number %d\n", num, ((num%50)+(j*j)));
    printf("Number is found after %d probing\n", j+1);
    break;
    }
    }
    
    }
    return 0;
}