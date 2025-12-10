#include<stdio.h>
int main(){
	int a, b;
	char ch;
	printf("Enter a value: ");
	scanf("%d", &a);
	printf("Enter b value: ");
	scanf("%d", &b);

	ch = getch();

	switch(ch){
		case '+' :
			printf("\n addition = %d", a+b);
			break;
		case '-' :
			printf("\n subtraction = %d", a-b);
			break;
		case '*' :
			printf("\n multiplication = %d", a*b);
			break;
		case '/' :
			printf("\n division = %d", a/b);
			break;
		case '%' :
			printf("\n remainder = %d", a%b);
			break;
		default :
			printf("Enter correct Character");

	}

	return 0;
}
