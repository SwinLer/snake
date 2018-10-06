#define W 70
#define H 20

void weizhi(int x,int y)
 {
 	COORD a;
 	a.X=x;
 	a.Y=y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);
 }
 
 void start()
{
	int m,n;
	int score=0;
	
	weizhi(40,10);
	printf("Welcome to snake game!\n");
	system("pause");
    system("cls");
	weizhi(80,8);
	printf("up:w");
	weizhi(90,8);
	printf("down:s");
	weizhi(80,10);
	printf("left:a");
	weizhi(90,10);
	printf("right:d");
	
	weizhi(80,13);
    printf("food:@");
    weizhi(80,16);
    printf("prop:$");
	
	weizhi(80,20);
	printf("score:%d",score);
	
	for(m=0;m<=H;m++)
	{
		weizhi(0,m);
	   	printf("|");
	    weizhi(W,m);
    	printf("|");
	    
	}
	for(n=0;n<=W;n++)
	{
		weizhi(n,0);
		printf("_");
		weizhi(n,H);
		printf("_");
	}
	printf("\n");
	system("pause");
	
	
}
