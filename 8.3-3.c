#include <stdio.h>

 void main() {
int x,y,z,sum=0;

printf("enter the size of row & colum =");
scanf("%d",&x);

int a[x][x];
printf("enter the arrays elements\n");
for(y=0;y<x;y++){
for(z=0;z<x;z++){
printf("a[%d][%d]=",y,z);
scanf("%d",&a[y][z]);
}    
}
for(y=0;y<z;y++){
for(z=0;z<x;z++){
    if(y==z){
        sum = sum + a[y][z];
    }
}    
}
printf("the sum of diagonal is : %d",sum);
 }