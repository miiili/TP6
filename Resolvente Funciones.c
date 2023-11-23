#include <stdio.h>
#include <math.h>
	int resolv (float a, float b, float c, float *x1, float *x2){
	*x1 =(-b+sqrt(b*b-4*a*c))/(2*a);
	*x2 =(-b-sqrt(b*b-4*a*c))/(2*a);
	return 0;
}
int main(void){
	float 	A,B,C,x1,x2;
	printf("Ingrese los coeficientes A:\n");
	scanf("%f",&A);
	printf("Ingrese los coeficientes B\n");
	scanf("%f",&B); 
	printf("Ingrese los coeficientes C:\n");
	scanf("%f",&C);
	resolv(A,B,C,&x1,&x2);
	printf("La raiz x1 es:%f\n",x1);
	printf("La raiz x2 es:%f\n",x2);
	return 0;
}
