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
  printf("Repeting arraya elements is : \n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
            }
           
        }
    }

    return 0;
}