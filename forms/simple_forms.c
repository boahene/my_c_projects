#include<stdio.h>
int main()
{
        	int age;
		int tel;
		int id;
		char fname[25];
		char lname[20];
		char sex[10];
		char loc[15];

		// the program begins here,
		// it starts with a request

		printf("\n");
		printf("***************CodeArena Forms*********************\n");
		printf("Fill in the blank space, BLOCK LETTERS ONLY\n");
		printf("what is your first name::\t");
		scanf("%24s",fname);
		printf("what is your last name::\t");
		scanf("%s19",lname);
		printf("how old are you?\t");
		scanf("%d",&age);
		printf("Enter Your sex? Male or Female::\t");
		scanf("%9s",sex);
		printf("what is your telephone number::\t");
		scanf("%d",&tel);
		printf("Where do you stay ?\t");
                scanf("%14s",loc);
		printf("Enter Your Ghana card number::\t");
		scanf("%d",&id);

		//The above program takes person input and process them to user !!

		printf("*******************************************************\n");
		printf("Your Information has been viewed,\n\n");
		printf("Your name firstname:%s\n",fname);
	        printf("Your last name is:%s\n",lname);
		printf("you are:%s\n",sex);
		printf("You are:%d\n",age);
		printf("Your contact number is: %d\n", tel);
		printf("You stay at: %s\n",loc);
		printf("Your ID number: %d\n",id);
		printf("\n");

		return 0;
}
