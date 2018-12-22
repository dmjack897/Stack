
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
int top=-1;
int i;
int stack[5];
int count1=1;  //Stackで現在位置を表す為に変数宣言
void main()
{
	
	int command;

	while(1) {
	printf("命令を選択してください : (1.push 2.pop 3.break)");
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
				printf("いっぱいになりました、入力ができないです。\n");
			}
	else
	{
		printf("Stackに保存しました。!\n");
		for(i=0;i<count1;i++)
		{
			stack[i]=i+1;
			printf("\t\tStack[%d]に %dが保存されました\n",i,i+1);
		}
	}
}
void pop()
{
	top--;
	if(top<=-1)
	{
		printf("出力ができないです。\n");
	}
	else
	{
		printf("Stackで出力しました。!\n");
		for(i=count1;i>count1-1;i--)
		{
			printf("\t\tStack[%d]で %dが出力されました。\n",i-2,i-1);
		}
		printf("\n");
		for(i=0;i<count1-2;i++)
		{
			printf("*Stack[%d]に %dが保存されました。\n",i,i+1);
		}
	}
}