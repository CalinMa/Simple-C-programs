/*Write a program that shows the minimum digit of all its digits
Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start 
the program.
Note that the numbers are declared as int */

int n,a,b,c;

main(){
printf("Enter a number: ");
scanf("%d",&n);
//printf("%d",n);

while (n>0) {
	a=n%10; //printf("%d",a);
	
	b=n%100; //printf("%d",b);
	
	n=n/10; //printf("%d",n);
	if (a<b) {
			c=a;
	} else {
			c=b;
	}
	//printf("%d",c);
	//printf("\n");
}

printf("The minimum value of all digits is: ");
printf("%d",c);
}
