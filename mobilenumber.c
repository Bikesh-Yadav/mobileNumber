#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>//useto execute system(cls)

void main()
{
	int length,first;
	long long int num;
	printf("enter phone number\n");
	scanf("%lld",&num);
			
	first=num/pow(10,9);//finding first digit of the integer
	system("CLS");//clear the screen

	if(first!=0 && first<10)
	{
		printf("valid mobile number\n");
		printf("your mobile numbrer is: %lld\n",num);	
	}
	else
	{
		printf("Invalid mobile number\n ");
		return main();//repeat the main function

	}
	
		
}
