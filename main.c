#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x1, y1;
    float x2, y2;
    float x3, y3;
} triangle;

void init(float* x1, float* y1, float* x2, float* y2, float* x3, float* y3)
{
    printf("Init data\n");
    *x1 = 1; *y1 = 1;
    *x2 = 2.5; *y2 = 3.5;
    *x3 = 7.4; *y3 = 2.6;
}

void read(float* x1, float* y1, float* x2, float* y2, float* x3, float* y3)
{
    printf("\n\nInput:\nx1 = ");
    scanf("%f", x1);
    printf("y1 = ");
    scanf("%f", y1);
    printf("x2 = ");
    scanf("%f", x2);
    printf("y2 = ");
    scanf("%f", y2);
    printf("x3 = ");
    scanf("%f", x3);
    printf("y3 = ");
    scanf("%f", y3);
}

void display(float x1, float y1, float x2, float y2, float x3, float y3)
{
    triangle in;
    printf("Output data:\n");
    printf(" x1 = %g, y1 = %g", x1, y1);
    printf("\n x2 = %g, y2 = %g", x2, y2);
    printf("\n x3 = %g, y3 = %g\n", x3, y3);
}

triangle add(float x1, float y1, float x2, float y2, float x3, float y3, float a1, float b1, float a2, float b2, float a3, float b3)
{
    triangle out;
    printf("\n\nAdding the triangles.\n");
    printf("New triangle:\n");
    out.x1 = x1 + a1;
    out.y1 = y1 + b1;
    out.x2 = x2 + a2;
    out.y2 = y2 + b2;
    out.x3 = x3 + a3;
    out.y3 = y3 + b3;
    return out;
}

double perimeter(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return (sqrt(pow((x2 - x1),2.0)) + sqrt(pow((y2 - y1),2.0))) + (sqrt(pow((x3 - x2),2.0)) + sqrt(pow((y3 - y2),2.0))) + (sqrt(pow((x1 - x3),2.0)) + sqrt(pow((y1 - y3),2.0)));
}

int main()
{
    triangle first, second;
    init(&first.x1, &first.y1, &first.x2, &first.y2, &first.x3, &first.y3);
    display(first.x1, first.y1, first.x2, first.y2, first.x3, first.y3);
    double perim = perimeter(first.x1, first.y1, first.x2, first.y2, first.x3, first.y3);
    printf("Perimiter first triangle: %g\n", perim);
    read(&second.x1, &second.y1, &second.x2, &second.y2, &second.x3, &second.y3);
    perim = perimeter(second.x1, second.y1, second.x2, second.y2, second.x3, second.y3);
    printf("Perimiter second triangle: %g\n", perim);
    triangle third = add(first.x1, first.y1, first.x2, first.y2, first.x3, first.y3, second.x1, second.y1, second.x2, second.y2, second.x3, second.y3);
    display(third.x1, third.y1, third.x2, third.y2, third.x3, third.y3);
    perim = perimeter(third.x1, third.y1, third.x2, third.y2, third.x3, third.y3);
    printf("Perimiter third triangle: %g\n\n", perim);
    return 0;
}
