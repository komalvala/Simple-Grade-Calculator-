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
    	     printf("excellent work!\n");
    	     break;
        case 'B' :
    	     printf("well done\n");
    	     break;
        case 'C' :
    	     printf("good job\n");
    	     break;
        case 'D' :
    	     printf("you passed,but you could do better\n");
    	     break;
        case 'F' :
    	     printf("sorry,you failed\n");
    	     break;
        default :
    	     printf("invalid grade");
	}

    	     
}