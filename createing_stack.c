#include<stdio.h>

struct Stack
{
    int arr[5];
    int tos;
};

int main()
{
    struct Stack S;
    S.tos = -1;
    S.tos = S.tos + 1;
    S.arr[S.tos] = 10;
    S.tos = S.tos + 1;
    S.arr[S.tos] = 20;
    S.tos = S.tos + 1;
    S.arr[S.tos] = 30;
    
    printf("Element at tos:"); 
    for(int i=0;i<S.tos;i++)
    {
      printf("%d",S.arr[i]);
    }
   printf("\n");
    return 0;
}

//OUTPUT WOULD BE - 
//Elements in the stack: 10 20 30 
