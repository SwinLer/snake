struct snake *tail;

int die1()
{
	
	tail = head->next;
	
	while (tail != NULL)
	{
		if (tail->X == head->X && tail->Y == head->Y)
		 {
		 	return 1;
		 	end();
		 }
		tail = tail->next;
	}
	return 0;
}

int die2()
{
	if (head->X == 0 || head->X == 70 || head->Y == 0 || head->Y == 20)
	{
		return 1;
		end();
	}
	
}

void end()
{
	if ( die1() == 1)
	{
			system("cls");
			weizhi(30,9);
		printf("GAME  OVER.\n");
		weizhi(30,10);
		printf("YOU BITE YOURSELF.\n ");
		weizhi(30,11);
		printf("YOUR SCORE IS %d.",score);
		exit(0);
	}
	else if ( die2() == 1)
	{
		system("cls");
		weizhi(30,9);
		printf("GAME OVER.\n ");
		weizhi(30,10);
		printf("YOU HIT THE WALL.\n");
		weizhi(30,11);
		printf("YOUR SCORE IS %d.",score);
		exit(0);
	}
	
}
