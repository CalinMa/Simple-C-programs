/*Write a program that reads from the keyboard a natural number with at least two digits 
and determines the sum of the number of tens and the number of units of the number read.
Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start 
the program.
Note that the numbers are declared as int */
int a,b,c,s;

main(){
printf("Enter the natural number with at least 2 digits: ");
scanf("%d",&a);

while (a<10) {
printf("Please enter a minimum 2 digits natural number: ");
scanf("%d",&a);
}
if (a>99) {
a=a%100;
}
b=a/10;
c=a%10;
s=b+c;


printf("The sum you are looking for is: ");
printf("%d",s);

}