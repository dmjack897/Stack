
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
int top=-1;
int i;
int stack[5];
int count1=1;  //Stack�Ō��݈ʒu��\���ׂɕϐ��錾
void main()
{
	
	int command;

	while(1) {
	printf("���߂�I�����Ă������� : (1.push 2.pop 3.break)");
	scanf("%d",&command);
	switch(command)
	{
	case 1:
		{
			push();
			count1++;
			break;
		}
	case 2:
		{
			pop();
			count1--;
			break;
		}
	case 3:
		{
			
			exit(0);
			break;
		}
	}
	}
}
void push()
{
	top++;
	if(top>=5)
			{
				printf("�����ς��ɂȂ�܂����A���͂��ł��Ȃ��ł��B\n");
			}
	else
	{
		printf("Stack�ɕۑ����܂����B!\n");
		for(i=0;i<count1;i++)
		{
			stack[i]=i+1;
			printf("\t\tStack[%d]�� %d���ۑ�����܂���\n",i,i+1);
		}
	}
}
void pop()
{
	top--;
	if(top<=-1)
	{
		printf("�o�͂��ł��Ȃ��ł��B\n");
	}
	else
	{
		printf("Stack�ŏo�͂��܂����B!\n");
		for(i=count1;i>count1-1;i--)
		{
			printf("\t\tStack[%d]�� %d���o�͂���܂����B\n",i-2,i-1);
		}
		printf("\n");
		for(i=0;i<count1-2;i++)
		{
			printf("*Stack[%d]�� %d���ۑ�����܂����B\n",i,i+1);
		}
	}
}