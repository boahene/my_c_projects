#include <stdio.h>
int main()
{
int a;
int b;

printf("\n");   //we are leaving an empty line
printf("this program accepts two numbers from a user and runs it as follows \n");
printf("input your first number:\t");
scanf("%d",&a);
printf("Please enter another number:\t");
scanf("%d",&b);
printf("\n");
printf("**************Enjoy Your outputs**********\n");
//addition of the two inputs (sum)
int sum = a + b;
printf("sum of your inputs is %d\n",sum);
printf("\n");

// substraction of the two numbers
int sub = a - b;
printf("Sub of the two numbers: %d\n",sub);
printf("\n");

// include the following multiplication, division.
return 0;
}
