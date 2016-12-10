#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void strcpy(char *a, char *b);
void strcat(char *a, char *b);
void strrev(char *a, char *b);
void strcmp(char *a, char *b);

int main(){
	int choice=0;
	char fMessage[10],sMessage[10];
	cout <<"Enter first message: ";
	gets(fMessage);
	cout <<"Enter second message: ";
	gets(sMessage);
	getch();
	system("cls");
	
	while (1){
	cout <<"[1]STRCAT \n"
		 <<"[2]STRCPY \n"
		 <<"[3]STRREV \n"
		 <<"[4]STRCMP \n"
		 <<"[5]EXIT \n"
		 <<"====================\n";
	cout <<"Choice: ";
	
	cin >> choice;
	
	switch (choice){
		case 1: strcat(fMessage,sMessage);break;
		case 2: strcpy(fMessage,sMessage);break;
		case 3: strrev(fMessage,sMessage);break;
		case 4: strcmp(fMessage,sMessage);break;
		case 5: exit(1);break;
		default:break;
	}
	system ("cls");
	}
	

}

void strcat(char *a, char *b)
{
	while (*a!='\0'){
		cout <<*a;
		*a++;
	}
	while (*b!='\0'){
		cout <<*b;
		*b++;
	}
	getch();
}

void strcpy(char *a, char *b){
	
	while (*a!='\0'||*b!='\0'){
		*a=*b;
		cout << *a;
		*a++;
		*b++;
	}
	getch();
}

void strrev(char *a, char *b){
int i=0,j=0;
char holder[10];
	while (*a!='\0'){
		*a++;
		i++;
		if (*a=='\0')
		{
			while (i==0)
			{
				cout <<*a;
				*a--;
			}
			
		}
	}
	
	while (*b!='\0'){
		*b++;

	}
	getch();
}

void strcmp(char *a, char *b){
	int value=0;
	while (*a!='\0'||*b!='\0'){
		if (*a>*b)
		{
			value=1;
			break;
		}
		
		if (*a<*b)
		{
			value=-1;
			break;
		}
		
		*a++;
		*b++;
	}

	cout <<value;
	getch();
}
