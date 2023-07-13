#include<stdio.h>
int sum(int *,int);
void main(){

	int a[50],n,x=0;
printf("Enter a element in array");
scanf("%d",&n);

x=sum(a,n);
printf("%d",x);
}

int sum(int* ptr,int n){

int i,sum=0;

for(i=0;i<n;i++){

    scanf("%u",ptr+i);
}
for(i=0;i<n;i++){

    sum=sum+*(ptr+i);
}
return(sum);
}
