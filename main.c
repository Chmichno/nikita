#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x1, y1;
    float x2, y2;
    float x3, y3;
} triangle;

void init(triangle in)
{
    printf("Init data\n");
    in.x1 = 1; in.y1 = 1;
    in.x2 = 2.5; in.y2 = 3.5;
    in.x3 = 7.4; in.y3 = 2.6;
}

void read(triangle in)
{
    printf("\nInput:\nx1 = ");
    scanf("%f", &in.x1);
    printf("y1 = ");
    scanf("%f", &in.y1);
    printf("x2 = ");
    scanf("%f", &in.x2);
    printf("y2 = ");
    scanf("%f", &in.y2);
    printf("x3 = ");
    scanf("%f", &in.x3);
    printf("y3 = ");
    scanf("%f", &in.y3);
}

void display(triangle in)
{
    printf("\nOutput data:\n");
    printf(" x1 = %g, y1 = %g", in.x1, in.y1);
    printf("\n x2 = %g, y2 = %g", in.x2, in.y2);
    printf("\n x3 = %g, y3 = %g", in.x3, in.y3);
}

triangle add(triangle in, triangle in2)
{
    triangle out;
    printf("\n Adding the triangles\n");
    printf(" New triangle:\n");
    out.x1 = in.x1 + in2.x1;
    out.y1 = in.y1 + in2.y1;
    out.x2 = in.x2 + in2.x2;
    out.y2 = in.y2 + in2.y2;
    out.x3 = in.x3 + in2.x3;
    out.y3 = in.y3 + in2.y3;
    return out;
}

double perimeter(triangle in)
{
    return (sqrt(pow((in.x2 - in.x1),2)) + sqrt(pow((in.y2 - in.y1),2))) + (sqrt(pow((in.x3 - in.x2),2)) + sqrt(pow((in.y3 - in.y2),2))) + (sqrt(pow((in.x1 - in.x3),2)) + sqrt(pow((in.y1 - in.y3),2)));
}

int main()
{
    triangle first, second;
    init(&first);
    display(first);
    double perim = perimeter(first);
    printf("\n\nPerimiter first triangle: %g\n", perim);
    read(second);
    triangle third = add(first, second);
    display(third);

    return 0;
}
