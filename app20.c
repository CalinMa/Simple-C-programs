/*Write a program that checks if the first digit of a number is even;
Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start 
the program.
Note that the numbers are declared as int */

//Rep cu cifre, 8

#include<stdio.h>
int n,a;


main(){

printf("Enter a number: ");
scanf("%d",&n);


a=0;

do {
	 
	n=n/10;  
	
}
while (n>10);
	
printf("n=%d\n",n);	
	
a=n%2; printf("a=%d\n",a); 

if (a==0) printf("The first digit is even.");
	else printf("The first digit is not even.");

}
