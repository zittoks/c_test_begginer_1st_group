#include <stdio.h>
#include <math.h>
int minsq(int side, int radius){
float box, circle, isk;
isk = 0;
box = side * side;
circle = radius * radius * M_PI;
if(box > circle){
    printf("min = %d", circle);
    isk = circle;
} 
if(circle > box){
    printf("min = %d", box);
    isk = box;
}
if(circle == box){
    printf("even");
}
return isk;
}
