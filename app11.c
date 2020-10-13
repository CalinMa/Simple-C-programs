/*Write a program that indicates the number that has the most digits.
Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start 
the program.
Note that the numbers are declared as int */
#include<stdio.h>
int m,n,a,b,c,d;


main(){
printf("Enter the first number: ");
scanf("%d",&n);
printf("Enter the second number: ");
scanf("%d",&m);

a=0;
b=0;
c=n;
d=m;

while (n>0) {
	a=a+1; 
	n=n/10; 
	}
while (m>0) {
	b=b+1;
	m=m/10;
}
if (a>b) {
	printf("The number that has the most digits is: ");
	printf("%d",c);
} else if (a<b) {
printf("The number that has the most digits is: ");
	printf("%d",d);
} else printf(" OUPS! The numbers have the same number of digits :)");

}
