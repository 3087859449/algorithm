#include<stdio.h>
#include<stdlib.h>


typedef struct LNode
{
        int data;
        struct LNode *next;
}LNode;



void createlistF(LNode *&L, int a[], int n)
{
        LNode *s;
        int i;
        L = (LNode*)malloc(sizeof(LNode));
        L ->next = NULL;
        for(i=0;i<n;++i)
        {
                s = (LNode*)malloc(sizeof(LNode));
                s ->data = a[i];

                s ->next = L ->next;
                L ->next = s;

        }

 }


 void printfList(LNode *L)
 {
        LNode *temp = L;
        int count = 0;
        printf("表中的元素为:\n");
        while(temp->next)
        {
                temp = temp->next;
                printf("%d\t",temp->data);
                count++;
                if(count%5==0)
                {
                        printf("\n");
                }
        }
        printf("\n");

 }

 int main()
 {
        LNode *L;
        int n;
        printf("请输入数组的个数：");
        scanf("%d",&n);
        int a[n];
        printf("请输入数组中的数(用空格分开)：\n");
        for(int i=0;i<n;++i)
        {
                scanf("%d",&a[i]);
        }


        createlistF(L,a,n);


        printfList(L);

        return 0;
 }
