#include<stdio.h>
#include<math.h>

/* Opgave 1
double area_of_triangle(double, double, double);

int main()
{
   double a, b, c, area;

   printf("Enter the lengths of sides of a triangle\n");

   scanf("%lf%lf%lf", &a, &b, &c);

   area = area_of_triangle(a, b, c);

   printf("Area of the triangle = %.2lf\n", area);

   return 0;
}

double area_of_triangle(double a, double b, double c)
{
   double s, area;

   s = (a+b+c)/2;

   area = sqrt(s*(s-a)*(s-b)*(s-c));

   return area;
}
*/
/* Opgave 2
int main()
{
    float a, b, c, A, B, C, R, s, pi, area;
    pi = acos(-1);

    printf("Input 3 sides\n");

    if (scanf("%f %f %f", &a, &b, &c) !=3)
    {
        fprintf(stderr, "You have to Input 3 NUMBERS !\n");
        return 1;
    }
    if (a <= 0 || b <= 0 || c <= 0)
    {
        fprintf(stderr,"Sides should not go under 0 !\n");
        return 1;
    }
    s = (a + b + c) / 2;
    if (a > s || b > s || c > s)
    {
        fprintf(stderr,"\nThis is not a triangle !\n");
        return 1;
    }

    area = sqrt(s * (s-a)*(s-b)*(s-c));

    R = (a*b*c) / (4 * area);

    A = (180 / pi)*asin(a /(2*R));
    B = (180 / pi)*asin(b /(2*R));
    C = (180 / pi)*asin(c /(2*R));

    printf("Sides: %6.2f %6.2f %6.2f \n", a, b, c);
    printf("Angles: %6.2f %6.2f %6.2f \n", A, B, C);
    printf("Area: %6.2f\n", area);
    printf("Omar gay\n");

    return 0;
}
*/
/* Opgave 3 A:
int main()
{
    printf("A is 37 angels, C is 81 angels and a is 50. Question what is side c: \n");
    float A = 37;
    float a = 50;
    float C = 81;
    float c;
    float pi = acos(-1);

    c = (a*(sin(C*pi/180)))/((sin(A*pi/180)));

    printf("\nc is %6.2f \n", c);

}
*/
