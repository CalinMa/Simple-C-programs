/*Write a program that prints the middle digit of a number, if the number has an odd number of digits
Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start 
the program.
Note that the numbers are declared as int */
#include<stdio.h>
int m,n,b,w,z,exp;

int a=0, res=1;

int main () {
// ask the user to enter a number; if the number is negative, enter the while loop.
do { 
printf("\033[1;32m");
printf("Please insert a positive number: ");
	scanf("%d",&n);
		
}	while (n<=0);
//we save the initial value of n
b=n;

//we calculate the number of digits the user-entered number has
while (n>0) {
	a++;
	n=n/10;
}
//we check if the number of digits is even or odd
w=a%2; //printf("w=%d%\n",w);

//we calculate how to get to the middle digit
exp=a/2; //printf("exp=%d\n",exp);
while(exp!=0){
	res *= 10;
	exp--;
}
//printf("res=%d\n",res);
m=(b/res)%10;

//we only print the result if the user entered value has odd number if digits
//and set the print color to red, then remove it;
printf("\033[1;31m"); //set red color text
if(w==0) printf("The number of digits is even");
else printf("The middle digit is: %d",m );
printf("\033[0m;"); // remove red color text 

}