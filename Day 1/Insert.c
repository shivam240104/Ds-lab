#include<stdio.h>
int main(){
     int arr[]={6,2,4,1,5};
     int position;
     printf("Enter the position");
     scanf("%d",&position);
     int newEle;
     printf("Enter the new element ");
     scanf("%d",&newEle);
     if(0<=position && position <=6){
        for( int i=4;i<=position;i--){
            arr[i+1]=arr[i];
        }

        arr[position-1]=newEle;
     }
        else{
            printf("sorry");
        }

        for(int i=0;i<=6;i++){
            printf("%d ",arr[i]);
        }

return 0;



}