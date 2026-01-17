#include <stdio.h>

int main(){
    double real1, real2, img1, img2, realsum, imgsum;
    
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%lf %lf", &real1, &img1);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%lf %lf", &real2, &img2);

    realsum = real1 + real2;
    imgsum = img1 + img2;

    if (imgsum >= 0){
        printf("Sum is: %.2f + %.2fi\n", realsum, imgsum);
    } 
    else {
        printf("Sum is: %.2f - %.2fi\n", realsum, -imgsum);
    }
}
