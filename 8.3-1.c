#include <stdio.h>

void  main() {
int w,x,y,z,sum=0;
float b;
printf("enter the size of row = ");
scanf("%d",&w);
printf("enter the size of cloum = ");
scanf("%d",&x);

int a[w][x];
for(y=0;y<w;y++){
for(z=0;z<x;z++){
    printf("a[%d][%d] = ",y,z);
    scanf("%d",&a[y][z]);
    sum = sum + a[y][z];
}    
}
b=w*x;
printf("%.2f",sum/b);

}