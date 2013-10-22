#include <stdio.h>

int main(int argc, char * argv[])
{
printf("\t\t\v\v 10 valemit\n\v\v\v");


printf("1.Raskusjõud F:\n");
/*valem F- raskusjõud */
float m;          
float a;          
float F;          

m= 7.98;
a= 9.82;
F= m*a;
printf("F= m*a\n");
printf("F= %.2f N\n\v",F);

printf("2.Rõhk p:\n");
/* valem p- rõhu valem */
float F1;          
float A;           
float p;           

F1= 3.14;
A= 10.98;
p= F1/A;
printf("p= F1/A\np= %.2f bar\n\v", p);

printf("3.Töö W:\n");
/* valem W- töö valem*/
float F2;         
float s;          
float W;          

F2= 5.69;
s= 8.98;
W= F2*s;
printf("W= F2*s\nW= %.2f J\n\v", W);

printf("4.Potentsiaalne energia Ep:\n");
/*valem Ep- potentsiaalne energia*/
float m1;          
float g;           
float h;           
float Ep;          

m1= 6.43;
g= 9.81;
h= 3.47;
Ep= (m1*g)/h;
printf("Ep= (m1*g)/h\nEp= %.2f J\n\v", Ep);

printf("5.Kineetiline energia Ek:\n");
/*valem Ek- kineetiline energia*/
float m2;          
float v;           
float Ek;          

m2= 2.67;
v= 3.00;
Ek= (m*v*v)/2;
printf("Ek= (m*v*v)/2\nEk= %.2f J\n\v", Ek);

printf("6.Võimsus P:\n");
/*valem P- võimsuse arvutamine*/
float W1;          
float t;           
float P;           

W1= 51.09;
t= 30.00;
P= W1/t;
printf("P= W1/t\nP= %.2f W\n\v", P);

printf("7.Kiirus v1:\n");
/*valem v1-kiiruse arvutamine*/
float s1;          
float t1;         
float v1;          

s1= 45.76;
t1= 19.50;
v1= s1/t;
printf("v1= s1/t1\nv1= %.2f m/s\n\v", v1);

printf("8.Kiirendus a:\n");
/*valem a-kiirenduse arvutamine*/
float v2;           
float t3;           
float a1;          

v2= 45.98;
t3= 60.09;
a1= v2/t3;
printf("a1= v2/t3\na= %.2f m/s*s\n\v", a1);

printf("9.Ringipindala S:\n");
/*valem S-ringipindala arvutamine*/
float pi;          
float r;           
float S;           

pi= 3.14;
r= 2.50;
S= pi*r*r;
printf("S= pi*r*r\nS= %.2f cm*cm\n\v", S);

printf("10.Ristkülikupindala S2:\n");
/*valem S2-ristkülikupindala*/
float a2;          
float h1;          
float S2;         

a2= 2.15;
h1= 1.10;
S2= a*h1;
printf("S2= a2*h1\nS2= %.2f cm*cm\n\v", S2);

return 0;
}
