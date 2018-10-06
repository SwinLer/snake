#define F '@'


struct snake {
	int X;
	int Y;
	struct snake *next;
};


struct FOOD {
	int fx;
	int fy;
	struct FOOD *next;
}*food;

int length = 4;
struct snake *head;

void snakebody ()
{
	int i;
	struct snake *body;
	
	body = (struct snake*) malloc(sizeof(struct snake));
	body->X = 30;
	body->Y = 7;
	body->next = NULL;
	for(i=1;i<=length;i++)
	{
		head = (struct snake*) malloc(sizeof(struct snake));
		head->next = body;
		head->X = 30+i;
		head->Y = 7;
		body = head;
	}
	
	while(body != NULL)
	{
		weizhi(body->X,body->Y);
		printf("#");
		body = body->next;
	}
	
}

void foody ()
{
	srand(time(NULL));
	food = (struct FOOD*) malloc(sizeof(struct FOOD));
	
	food->fx = rand()%69+1;
	food->fy = rand()%19+1;
	
	weizhi(food->fx,food->fy);
	printf("%c",F);
} 
