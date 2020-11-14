/*Write a program that checks how many digits are greater than the first digit of the entered number ;
Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start 
the program.
Note that the numbers are declared as int */

//Rep cu cifre, 9

#include<stdio.h>
int n,a,b,c,cont;


main(){
cont=0;
printf("Enter a number: ");
scanf("%d",&n);

b=n; printf("b=%d\n",b);	

do {
	 
	n=n/10;  
	
}
while (n>10);
a=n;	
printf("a=%d\n",a);	
do {
	 
	c=b%10;  
	
	if (c>a) {
		
		cont++; 
	}
	b=b/10;
	
}
while (b>10);
	
printf("There are %d  digits greater than the first digit.",cont);	



}
