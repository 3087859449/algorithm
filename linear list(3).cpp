/*用头插法建立单链表*/

void CreateListHead(LinkList *L, int n)
{
	LinkList p;
	int i;

	srand(time(0));
	*L= (LinkLst)malloc(sizeof(Node));
	(*L)->nest = NUII;

	for(i=0;i<n;i++)
	{
		p=(LinkList)malloc(sizeof(Node));
		p->data = rand()&100+1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}