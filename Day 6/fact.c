#include<stdio.h>
int Fact(int n){
    if(n==1){
        return 1;
    }
    return n*Fact(n-1);
}
int main(){
    int n;
printf("Enter the number : \n");
scanf("%d",&n);
printf("%d",Fact(n));
return 0;
}