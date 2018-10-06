#define WAIT 170
 




char out;
int score = 0;
struct snake *A;
struct snake *newhead;


void MOVE()
{
	struct snake *newhead;
	newhead=(struct snake*)malloc(sizeof(struct snake));
	if ( out == 'Z')
	{
		newhead->X = head->X;
	    newhead->Y = head->Y-1;
	    if( newhead->X == food->fx && newhead->Y == food->fy)
	{
		newhead->next = head;
		head = newhead;
		A = head;
		
		while(A != NULL)
		{
			weizhi(A->X,A->Y);
			printf("#");
			A=A->next;
		}
	score++;
	foody();
	
	}
	else
	{
		newhead->next = head;
		head = newhead;
		A = head;
		
		while(A->next->next != NULL)
		{
			weizhi(A->X,A->Y);
			printf("#");
			A=A->next; 
		}
		weizhi(A->next->X,A->next->Y);
		printf(" ");
		free(A->next);
		A->next = NULL;
	}
	}
	if ( out == 'S')
	{
		newhead->X = head->X;
		newhead->Y = head->Y+1;
	if( newhead->X == food->fx && newhead->Y == food->fy)
	{
		newhead->next = head;
		head = newhead;
		A = head;
		
		while(A != NULL)
		{
			weizhi(A->X,A->Y);
			printf("#");
			A=A->next;
		}
	score++;
	foody();
	
	}
	else
	{
		newhead->next = head;
		head = newhead;
		A = head;
		
		while(A->next->next != NULL)
		{
			weizhi(A->X,A->Y);
			printf("#");
			A=A->next; 
		}
		weizhi(A->next->X,A->next->Y);
		printf(" ");
		free(A->next);
		A->next = NULL;
	}
	}
	if ( out == 'V')
	{
		newhead->X = head->X-1;
		newhead->Y = head->Y;
	if( newhead->X == food->fx && newhead->Y == food->fy)
	{
		newhead->next = head;
		head = newhead;
		A = head;
		
		while(A != NULL)
		{
			weizhi(A->X,A->Y);
			printf("#");
			A=A->next;
		}
	score++;
	foody();
	
	}
	else
	{
		newhead->next = head;
		head = newhead;
		A = head;
		
		while(A->next->next != NULL)
		{
			weizhi(A->X,A->Y);
			printf("#");
			A=A->next; 
		}
		weizhi(A->next->X,A->next->Y);
		printf(" ");
		free(A->next);
		A->next = NULL;
	}
	}
	if ( out == 'D')
	{
		newhead->X = head->X+1;
		newhead->Y = head->Y;
	if( newhead->X == food->fx && newhead->Y == food->fy)
	{
		newhead->next = head;
		head = newhead;
		A = head;
		
		while(A != NULL)
		{
			weizhi(A->X,A->Y);
			printf("#");
			A=A->next;
		}
	score++;
	foody();
	
	}
	else
	{
		newhead->next = head;
		head = newhead;
		A = head;
		
		while(A->next->next != NULL)
		{
			weizhi(A->X,A->Y);
			printf("#");
			A=A->next; 
		}
		weizhi(A->next->X,A->next->Y);
		printf(" ");
		free(A->next);
		A->next = NULL;
    }
	}
	
}


 
 void control ()
{
	char ch;
	ch = getch();
	out = 'D';
	
	while (1)
	{
		MOVE();
		if(kbhit()!=0)
		{
			ch = getch();
		switch ( ch)
		{
			case 'W':
			case 'w': if ( out != 'S')
			          out = 'Z';
			          break;
			case 'A':
			case 'a': if ( out != 'D')
			          out = 'V';
			          break;
			case 'S':
			case 's': if ( out != 'Z')
			          out = 'S';
			          break;
			case 'D':
			case 'd': if ( out != 'V')
			          out = 'D';
					  break;
			default: break;	     
		}
		}
	        Sleep ( WAIT);
			weizhi(80,20);
        	printf("score:%d",score);
        	end();
	}
 } 
 
