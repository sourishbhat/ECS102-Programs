#include <stdio.h>

struct Triangle{
    float length;
    float breadth;
}t1;

void main(){
    printf("Size of the triangle: %2ld\n", sizeof(t1));

}