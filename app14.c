/*Write a program that checks if all the digits of a numbers are 0 or 1.
Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start 
the program.
Note that the numbers are declared as int */

int n,m;
int a=0;

main(){
	printf("\033[1;31m"); 
printf("Please enter a integer number: ");
scanf("%d",&n);
printf("\033[0m");

while (n>0){
	m=n%10;
	n=n/10;
if(m!=0 && m!=1) a++; 
}

if (a==0) {
	printf("\033[1;34m");
	printf("All the digits are 0 or 1\n");
	printf("\033[0m");
}
else {
	printf("\033[1;32m");
	printf("Not all digits are 0 or 1\n");
	printf("\033[0m");
}
//printf("a=%d\n",a);

}