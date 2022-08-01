//menu based c program to emplement primitive element of stack
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int top=-1,size=0,element=0,i=0;
	char ch;
	int stack[size];
	printf("enter the size of array: ");
	scanf("%d",&size);
	while(1){
		printf("\n1>>push\n2>>POP\n3>>dispaly\n4>>exit\n");
		printf("enter your choice: ");
		ch=getche();
		switch(ch){
			case '1':
				{
					if(top==size-1){
						printf("\n\n-------------------------\nstack overflow \n-------------------------\n");
					}
					else{
						printf("\nenter the element you want to insert: ");
						scanf("%d",&element);
						top=top+1;
						stack[top]=element;
					}
					break;
			}
					case '2':
						{
							if(top==-1){
								printf("\n\n-------------------------\nstack underflow: \n-------------------------\n");
							}
							else{
								printf("\nelement deleted is %d: \n",stack[top]);
								top=top-1;
							}
							break;
						}
						case '3':
							{
								if(top==-1){
									printf("\n\n-------------------------\nstack is emepty: \n-------------------------\n");
								}
								else{
									printf("\nthe stack elements inserted are listed below: ");
									printf("\n-------------------------");
									for(i=top;i>=0;i--){
										printf("\n%d",stack[i]);
									}
									printf("\n");
								}
								break;
							}
				case '4':
					{
						exit(0);
					}
					default:{
						printf("\n-------------------------\nenter valid choice: \n-------------------------\n");
						break;
					}
		}
	}
	return 0;
}
