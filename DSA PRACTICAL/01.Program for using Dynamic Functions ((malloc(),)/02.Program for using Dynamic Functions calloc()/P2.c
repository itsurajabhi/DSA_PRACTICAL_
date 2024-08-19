

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int n,i,*ptr,sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==0)
    {
    printf("Memory is not Allacoted:");
    exit(0);
    }
    printf("Enter elements:");
    for(i=0;i<n;i++);
    {
    scanf("%d",ptr+i);
    sum+=*(ptr+i);
    }
    printf("sum=%d",sum);
    free(ptr);
    return 0;

}
