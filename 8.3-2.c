#include <stdio.h>

void  main() {
int w,x,y,z;

printf("enter the size of row = ");
scanf("%d",&w);
printf("enter the size of colum = ");
scanf("%d",&x);

int a[w][x];
printf("enter the A elements\n");
for(y=0;y<w;y++){
for(z=0;z<x;z++){
    printf("a[%d][%d] = ",y,z);
    scanf("%d",&a[y][z]);
}    
}

int b[w][x];

printf("enter the B elements\n");
for(y=0;y<w;y++){
for(z=0;z<x;z++){
printf("b[%d][%d] = ",y,z);
scanf("%d",&b[y][z]);
}    
}

int d[w][x];
printf("array c is : \n");
for(y=0;y<w;y++){
for(z=0;z<x;z++){
    d[y][z]=a[y][z]+b[y][z];
    printf("%d",d[y][z]);
}    
printf("\n");
}
}