#include<stdio.h>

void area_peri(float, float*, float*);
  
int main() {
	float r, a, p;
	scanf("%f", &r);
	area_peri(r, &a, &p);

	printf("%.2f\n", a);
	printf("%.2f\n", p);
}

void area_peri(float r, float * a, float * p) {
	*a = 3.14 *r * r;
	*p = 2 * 3.14 * r;
}
