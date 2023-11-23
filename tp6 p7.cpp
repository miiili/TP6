#include <stdio.h>
#include <math.h>

void Raices(float a,float b,float c,float* raiz1,float* raiz2){
	float discriminante=b*b-4*a*c;
	*raiz1 = (-b+sqrt(discriminante))/(2*a);
	*raiz2 = (-b-sqrt(discriminante))/(2*a);
}
int main() {
	float a,b,c;
	float raiz1, raiz2;
	
	printf("ingrese los coeficientes:");
	scanf("%f %f %f",&a,&b,&c);
	
	Raices(a,b,c,&raiz1,&raiz2);
	
	printf("las raices son: %.2f y %.2f\n",raiz1,raiz2);
	
	return 0;
}
