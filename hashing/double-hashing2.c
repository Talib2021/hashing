#include<stdio.h>

int main(){
    int n, m, i, j, k, num, temp;
    int arr[11], p[11];
    for(i=0; i<11; i++){
    p[i]=0;
    }
    printf("Enter size of array:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
    scanf("%d", &temp);
    k=temp%11;
    if(p[k]==0){
    arr[k]=temp;
    p[k]=1;
    }
    else{
    for(j=0; j<11; j++){
    k=((temp%11)+(j*(8-(temp%8))))%11;
    if(p[k]==0){
    arr[k]=temp;
    p[k]=1;
    break;
    }
    }
    }
    }
    for(i=0; i<11; i++){
    if(p[i]==0){
    printf("index %d : --\n", i);
    }
    else if(p[i]==1){
    printf("index %d : %d\n",i , arr[i]);
    }
    }
}