//This program will calculate the sum of the last two digits of some entered numbers
//Open Cygwin, run gcc app1.c -o app1.exe to make an exe file, then run ./app1.exe to start the program
int a,b,c;

main(){
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
c= (a+b)%10;
printf("The number you are looking for is: ");
printf("%d", c);
}
