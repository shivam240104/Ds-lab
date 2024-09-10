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
    
    int position;
    printf("Enter the position of array which element want to delete");
    scanf("%d",&position);

    for(int i=position-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }

    printf("updated Array is : \n");
    for(int i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}