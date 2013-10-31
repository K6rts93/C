#include <stdio.h>
#include <math.h>

Double f(double x) {
	return sin(x) 
}

double integraal(double x0, double x1, int n, double (*f)double)) {
	
	double a;
	double b;
	double c;
	double dx;
	double dS;
	double S;
	double y;
	int i;
	
	S = 0;
	dx = (x1 - x0) / n;
	for (i=0 ; i<n ; i++) {
		a = x0 + i * dx;
		b = a + dx;
		c = (a + b) / 2;
		y = f(c);
		dS = y * dx;
		S += dS;
	}
	
	Return S;
	
int main(int arc, char*argv[]) {
	double pindala;
	pindala = integraal(0, 3.141592/2, 400, f);
	printf("pindala = %f\n", pindala);
	return 0;
}	
