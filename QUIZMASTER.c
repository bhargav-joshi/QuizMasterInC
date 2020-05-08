#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()

  
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\n\t\t  `````````````````QUIZ MASTER ````````````````\n");
     printf("\n\t\t________________________________________________");

     printf("\n\t\t\t              WELCOME ");
     printf("\n\t\t\t                TO ");
     printf("\n\t\t\t             THE GAME ");
     printf("\n\t\t________________________________________________");
     printf("\n\t\t________________________________________________");
     printf("\n\t\t   BECOME A INTELLIGENT & MILLIONAIRE!!!!!!!!   ");
     printf("\n\t\t________________________________________________");
     printf("\n\t\t________________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to QUIZ MASTER --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\n1. Which if the following is/are the levels of implementation of data structure");
		printf("\n\nA) Abstract level\t\tB) Application level\n\nC) Implementation level\t\tD) All of the above");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D) All of the above");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\n2. .................... level is where the model becomes compatible executable code");
		printf("\n\nA) Abstract level\t\tB) Application level\n\nC) Implementation level\t\tD) All of the above");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C) Implementation level");
		       getch();
		       break;}

        case 3:
		printf("\n\n\n3.  Stack is also called as");
		printf("\n\nA) Last in first out\t\tB) First in last out\n\nC) Last in last out\t\tD) First in first out");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A) Last in first out");
		       getch();
		       break;}

        case 4:
		printf("\n\n\n…………… is not the component of data structure.");
		printf("\n\nA) Operations\t\tB) Storage Structures\n\nC) Algorithms\t\tD) None of above");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D) None of above");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nInserting an item into the stack when stack is not full is called ............. Operation and deletion of itemform the stack, when stack is not empty is called...........operation.");
        printf("\n\nA) push, pop K2\t\tB) pop, push\n\nC) insert, delete\t\tD) delete, insert");
        if (toupper(getch())=='A')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is A push,pop");
		       getch();
		       break;}

        case 6:
		printf("\n\n\n……………. Is a pile in which items are added at one end and removed from the other.");
		printf("\n\nA) Stack\t\tB) Queue\n\nC) List\t\tD) None of the above");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B Queue");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\n______ is very useful in situation when data have to stored and then retrieved in reverse order.");
		printf("\n\nA) Stack\t\tB) Queue\n\nC) List\t\tD) Link list");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A) Stack");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nWhich data structure allows deleting data elements from and inserting at rear?");
		printf("\n\nA) Stacks\t\tB) Queues\n\nC) Dequeues\t\tD) Binary search tree");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B) Queues");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nA ……. is a data structure that organizes data similar to a line in the supermarket, where the first one in line is the first one out");
		printf("\n\nA) Queue linked list\t\tB) Stacks linked list\n\nC) Both of them\t\tD) Neither of them");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A) Queue linked list");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nWhich of the following is non-liner data structure?");
		printf("\n\nA) Stacks\t\tB) List\n\nC) Strings\t\tD) Trees");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D) Trees");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nIdentify the data structure which allows deletions at both ends of the list but insertion at only one end.");
		printf("\n\nA) Input restricted dequeue\t\tB) Output restricted dequeue\n\nC) Priority queues\t\tD) Stack");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A) Input restricted dequeue");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich of the following data structure is non linear type?");
		printf("\n\nA) Strings\t\tB) Lists\n\nC) Stacks\t\tD) Graph");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D) Graph");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nTo represent hierarchical relationship between elements, Which data structure is suitable?");
		printf("\n\nA) Dequeue\t\tB) Priority\n\nC) Tree\t\tD) Graph");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C) Tree");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nA directed graph is ………………. if there is a path from each vertex to every other vertex in the digraph.");
		printf("\n\nA) Weakly connected\t\tB) Strongly Connected\n\nC) Tightly Connected\t\tD) Linearly Connected");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B) Strongly Connected");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nIn ……………, search start at the beginning of the list and check every element in the list.");
		printf("\n\nA) Linear search\t\tB) Binary search\n\nC) Hash Search\t\tD) Binary Tree search");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A) Linear search");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nThe advantage of …………….. is that they solve the problem if sequential storage representation. But disadvantage in that is they are sequential lists.");
		printf("\n\nA) Lists\t\tB) Linked Lists\n\nC) Trees\t\tD) Queues");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B) Linked Lists");getch();break;goto score;}

        case 11:
		printf("\n\n\nWhat will be the value of top, if there is a size of stack STACK_SIZE is 5");
		printf("\n\nA) 5\t\tB) 6\n\nC) 4\t\tD) None");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C) 4");getch();
              break;goto score;}

        case 12:
		printf("\n\n\n………… is not the operation that can be performed on queue.");
		printf("\n\nA) Insertion\t\tB) Deletion\n\nC) Retrieval\t\tD) Traversal");
		if (toupper(getch())=='D')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is D) Traversal");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nA graph is a collection of nodes, called ………. And line segments called arcs or ……….. that connect pair of nodes.");
		printf("\n\nA) vertices, edges\t\tB) edges, vertices\n\nC) vertices, paths\t\tD) graph node, edges");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A) vertices, edges");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nIn general, the binary search method needs no more than ……………. comparisons.");
		printf("\n\nA) [log2n]-1\t\tB) [logn]+1\n\nC) [log2n]\t\tD) [log2n]+1");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D) [log2n]+1");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nWhich of the following is not the type of queue?");
		printf("\n\nA) Ordinary queue\t\tB) Single ended queue\n\nC) Circular queue\t\tD) Priority queue");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B) Single ended queue");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nThe property of binary tree is");
		printf("\n\nA) The first subset is called left subtree\t\tB) The second subtree is called right subtree\n\nC) The root cannot contain NULL\t\tD) The right subtree can be empty");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is D) The right subtree can be empty");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nAny node is the path from the root to the node is called");
		printf("\n\nA) Successor node\t\tB) Ancestor node\n\nC) Internal node\t\tD) None of the above");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B) Ancestor node");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\n………………. is not an operation performed on linear list		a) Insertion b) Deletion c) Retrieval d) Traversal");
		printf("\n\nA) only a,b and c \t\tB) only a and bn\n\nC) All of the above\t\tD) None of the above\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D) None of the above");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich is/are the application(s) of stack");
		printf("\n\nA) Function calls\tB) Large number Arithmetic\n\nC) Evaluation of arithmetic expressions\tD) All of the above\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D) All of the above");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nWhen new data are to be inserted into a data structure, but there is not available space; this situation is usually called ….");
		printf("\n\nA. Underflow\t\tB. overflow\n\nC. houseful\t\tD. saturated");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B. overflow");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nA data structure where elements can be added or removed at either end but not in the middle is called …");
		printf("\n\nA. linked lists\t\tB. stacks\n\nC. queues\t\tD. dequeue");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. dequeue");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nWhich of the following data structure is linear type?");
		printf("\n\nA) Array\t\tB) Tree\n\nC) Graphs\t\tD) Hierarchy");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A) Array");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nEach node in a linked list has two pairs of ………….. and ……………….");
		printf("\n\nA) Link field and information field\t\tB) Link field and avail field\n\nC) Avail field and information field\t\tD) Address field and link field");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A) Link field and information field");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATIONS *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATIONS ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... QUIZ MASTER ...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****QUIZ MASTER is developed by BHARGAV & TEAM********");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}

