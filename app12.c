/*Write a program that checks if all of the digits of a number are even;

Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start 
the program.
Note that the numbers are declared as int */
#include<stdio.h>
int a,b,n;



main(){
printf("Enter any integer number: ");
scanf("%d",&n);
b=0;
while (n>0) {
	a=n%10; //printf("a=%d\n", a);
	if (a%2==1) b++; //printf("b=%d\n", b);	
	n=n/10; //printf("n=%d\n", n);
} 
if (b==0) printf("All the digits are even");
else printf("Not all the digits are even");	


}
