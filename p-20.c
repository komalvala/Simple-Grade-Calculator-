#include<stdio.h>
main()
{
	int score;
	char grade;
	printf("enter the score : ");
	scanf("%d",&score);
	
    grade = (score >= 90)?'A':(score >= 80)? 'B':(score >= 70)? 'C':(score >= 60)? 'D':'F';
    
    printf("your grade is %c\n",grade);
	

	
}