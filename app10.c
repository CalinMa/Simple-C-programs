/*Write a program that calculates the arithmetic mean of the even digits of a number;
Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start 
the program.
Note that the numbers are declared as int */
#include<stdio.h>
int n,a,b,c,e;


main(){
printf("Enter a number: ");
scanf("%d",&n);
//printf("%d",n);
b=0;
c=0;
while (n>0) {
	a=n%10; //printf("%d",a); printf("\n");
	e=a%2; //printf("%d",e); printf("\n");
	if (e==0) {
		b=b+a; //printf("%d",b); printf("\n");
		c=c+1; //printf("%d",c); printf("\n");
	}
	
n=n/10; //printf("%d",n); printf("\n");
}

printf("The arithmetic mean of all even digits is: ");
printf("%d",b/c);
}
