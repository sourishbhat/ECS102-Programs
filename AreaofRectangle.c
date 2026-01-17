#include <stdio.h>

int main(){
    int len, wid, area;
    len = 10;
    wid = 10;

    area = len * wid;

    printf("The area of the rectangle with the length %d unit and width %d unit is: %d square units", len, wid, area);

    return 0;
}