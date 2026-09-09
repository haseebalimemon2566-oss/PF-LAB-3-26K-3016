#include<stdio.h>
int main(){
	int income,age,repay;
	printf("Enter your income,age and existing repay:\n",income,age,repay);
	scanf("%d %d %d" ,&income ,&age ,&repay);
	if(income>30000){
		
		if(age>21&&age<60) 
		if(repay<income)
		printf("loan Approved");
		else
		printf("rejected due to loan");
		
		else
			printf("rejected due to age");
		}else
		printf("rejected due to income");		
}