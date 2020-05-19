#include <stdio.h>

int main(void) {
    double radius, area,circumference;
	printf("\nEnter the radius of Circle : ");
	scanf("%lf", &radius);
	area = 3.14 * radius * radius;
	circumference = 2 * 3.14 * radius;
	printf("\nArea of Circle : %f", area);
	printf("\ncircumference of Circle : %f", circumference);
 
  return 0;
}
