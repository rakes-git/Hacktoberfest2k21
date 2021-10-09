#include<stdio.h>
void BubbleSort(int [],int);
int main()
{
   int size,element,index,i;
   printf("Enter The Size: ");
   scanf("%d",&size);
   int A[size];
   printf("Enter The Elements: ");
   for(i=0;i<size;i++) scanf("%d",&A[i]);
   BubbleSort(A,size);
   printf("\n\nThe Sorted Array is: \n");
   for(i=0;i<size;i++) printf("%d\t",A[i]);
   return 0;
}
 void BubbleSort(int A[],int size)
 {
    int tmp,ctr=0,i,j,k;
    for(i=0;i<size;i++){
        for(j=0;j<(size-1);j++){
            if(A[j]>A[j+1]){
                tmp=A[j];
                A[j]=A[j+1];
                A[j+1]=tmp;
            }
        }
        printf("\nArray After Iteration-%d\t",(++ctr));
        for(k=0;k<size;k++) printf("\t%d",A[k]);
     }
 }
