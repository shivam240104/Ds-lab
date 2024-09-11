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
    
    int si=0;
    int ei=n-1;
    while (si<=ei)
    {
        /* code */
        int t=arr[si];
            arr[si]=arr[ei];
            arr[ei]=t;
            si++;
            ei--;

    }

    printf("Updated array is :  " );
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
}