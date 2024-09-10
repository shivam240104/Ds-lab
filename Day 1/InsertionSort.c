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
    
    int newEle;
    printf("Enter new element : \n");
    scanf("%d",&newEle);
    int indx;
    for(int i=0;i<n;i++){
        if(arr[i]>newEle){
            indx=i;
            break;
        }
    }

    for(int i=n;i>=indx;i--){
        arr[i]=arr[i-1];
    }
    arr[indx-1]=newEle;

    printf("new array is : \n");

    for(int i=0;i<=n;i++){
        printf("%d ", arr[i]);
    }

}