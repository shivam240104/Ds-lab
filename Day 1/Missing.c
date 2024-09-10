#include<stdio.h>
int main(){
    int n;
   
    printf("Enter the number of elements in the array : \n");
    scanf("%d",&n);
     int arr[n];
     printf("Enter arrays element in sorted way \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    int m= sizeof(arr[0])+1;
    printf("%d",m);
 printf("\n");
   int sum=m*(m+1)/2;
   printf("%d",sum);
    printf("\n");
    for(int i=0;i<n;i++){
        sum=sum-arr[i];
    }

    printf("missing number is : %d", sum);

    return 0;
}