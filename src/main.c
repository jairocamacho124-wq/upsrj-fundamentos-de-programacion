#include<stdio.h>

int main()

{
    float side, area, volume;
    printf("Enter the value for the side:");
    scanf("%f",&side);
    area=side*side;
    printf("The area of the square is:");
    printf("%f",area);
    volume=side*side*side;
    printf("\n");
    printf("The volume of cube is:");
    printf("%f",volume);
    printf("\n");
    return 0;
} 