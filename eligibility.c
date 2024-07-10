#include<stdio.h>
main()
{
	int score;
	char grade;
	printf("enter the score : ");
	scanf("%d",&score);
	
    grade = (score >= 90)?'A':(score >= 80)? 'B':(score >= 70)? 'C':(score >= 60)? 'D':'F';
    
    printf("your grade is %c. ",grade);
    
    switch(grade)
    {
    	case 'A' :
    	     printf("excellent work!");
    	     break;
        case 'B' :
    	     printf("well done.");
    	     break;
        case 'C' :
    	     printf("good job.");
    	     break;
        case 'D' :
    	     printf("you passed,but you could do better.");
    	     break;
        case 'F' :
    	     printf("sorry,you failed.");
    	     break;
        default :
    	     printf("invalid grade.");
	}
	
	if(grade >= 'A'&& grade <= 'D')
	{
		printf("Congratulations! You are eligible for the next level\n");
	}
	else if(grade == 'F')
	{
	    printf("Please try again next time");
	}

    	     
}