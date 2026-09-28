// calculate the area and perimeter of a rectangle
#include<stdio.h>
int main ()
{
    int length = 10;
    int width = 5;
    int area = length * width;
    int perimeter = 2 * (length + width);
    printf("Area of the rectangle is: %d\n", area);
    printf("Perimeter of the rectangle is: %d\n", perimeter);
    return 0;
    
}