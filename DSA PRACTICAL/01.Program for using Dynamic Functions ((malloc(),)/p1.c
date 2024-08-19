#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int *ptr,i,n1,n2;
    printf("Enter size:");
    scanf("%d,&n1");
    ptr=(int*)malloc(n1* sizeof(int));
    printf("Address of previously Allocated memory:");
    for(i=0;i<n1;i++);
    printf("%u\n",ptr+i);
    printf("\n Enter the new size:");
    scanf("%d",&n2);
    //relocating the memory
    ptr=(int*)realloc (ptr,n2* sizeof(int));
    printf("Address of newly Allocated memory:");
    for(i=0;i<n2;i++);
    printf("%u\n",ptr+i);
    free(ptr);
    return 0;
    
}
