#include<stdio.h>
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,3};
    int n=sizeof(arr1)/sizeof(arr1[0]); //5
    int m=sizeof(arr2)/sizeof(arr2[0]); 
   int k;
   for(int i=0;i<n;i++){
    k=0;
    for(int j=0;j<m;j++){
        if(arr1[i]==arr2[j]){
            k++;
        }
    }
    if(k==0){
        printf("%d ",arr1[i]);
    }
   }
}