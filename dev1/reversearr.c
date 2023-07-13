#include<stdio.h>
void main(){

int a[50],i,n,z;

printf("Enter a arrray limit\n");
scanf("%d",&n);

printf("Enter a elemnt in the array");
for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}
printf("Dispaly element in the array");
for(i=n-1;i>=0;i--){

    printf("%d\t",a[i]);
}
}
