//*****************************************//
//              HEADER FILES               //
//*****************************************//
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define t 100
#define td 50
//*****************************************//
//	     FUNCTION PROTOTYPES           //
//*****************************************//

void head();
void enter();
void calculate();
void menu();
void det_stat();
void cal_days();

//*****************************************//
//	            STRUCTURE              //
//*****************************************//

struct student
{
	char name[20];
	long reg;
	int s[7];
}s[100];

//******************************************//
//		GLOBAL VARIABLES            //
//******************************************//

int n;
float att[100];

//*****************************************//
//		MAIN FUNCTION		   //
//*****************************************//

int main(){
	clrscr();
	head();
	enter();
	getch();
	return 0;
}

//*****************************************//
//	     FUNCTION DEFINITIONS          //
//*****************************************//

void head(){
	int i=0,gd=DETECT,gm;
	char s1[]="WELCOME TO",s2[]="ATTENDANCE SIMULATOR",s3[]="Programmed by - Sitesh Roy ";
	initgraph(&gd,&gm,"C:\\TurboC++\\BGI");
	line(210,150,410,150);
	line(210,200,410,200);
	line(210,150,210,200);
	line(410,150,410,200);
	line(200,140,420,140);
	line(200,210,420,210);
	line(200,140,200,210);
	line(420,140,420,210);
	gotoxy(35,11);
	while(s1[i]!='\0')
	{
		printf("%c",s1[i]);
		delay(100);
		i++;
	}
	i=0;
	gotoxy(30,12);
	while(s2[i]!='\0')
	{
		printf("%c",s2[i]);
		delay(100);
		i++;
	}
	line(200,290,450,290);
	i=0;
	gotoxy(28,18);
	while(s3[i]!='\0')
	{
		printf("%c",s3[i]);
		delay(100);
		i++;
	}
	closegraph();
	getch();
}

void enter(){
	int i=0,j;
	clrscr();
	gotoxy(23,10);
	printf("Number of records you want to add : ");
	scanf("%d",&n);
	while(i<n){
		clrscr();
		gotoxy(35,2);
		printf("Enter record %d :-\n",i+1);
		gotoxy(18,5);
		printf(" Name - ");
		scanf("%s",s[i].name);
		fflush(stdin);
		gotoxy(18,6) ;
		printf(" Registration number - ");
		scanf("%ld",&s[i].reg);
		/*if(i!=0){
			for(j=0;j<i;j++){
				if(s[i].reg==s[j].reg){
					gotoxy(41,6);
					printf("Error! Same registration number entered!");
					sound(250);
					delay(500);
					nosound();
					getch();
					printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
					printf("                                        ");
					printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
					scanf("%ld",&s[i].reg);
				}
			}
		} */
		gotoxy(18,8);
		printf(" Attendance :-");
		gotoxy(18,9);
		printf(" CSE101 - ");
		scanf("%d",&s[i].s[0]);
		fflush(stdin);
		while(s[i].s[0]<0 || s[i].s[0]>100){
			gotoxy(29,9);
			printf("Invalid Input!");
			sound(250);
			delay(500);
			nosound();
			getch();
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			printf("              ");
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			scanf("%d",&s[i].s[0]);
		}
		gotoxy(18,10);
		printf(" ECE131 - ");
		scanf("%d",&s[i].s[1]);
		while(s[i].s[1]<0 || s[i].s[1]>100){
			gotoxy(29,10);
			printf("Invalid Input!");
			sound(250);
			delay(500);
			nosound();
			getch();
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			printf("              ");
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			scanf("%d",&s[i].s[1]);
		}
		gotoxy(18,11);
		printf(" PHY109 - ");
		scanf("%d",&s[i].s[2]);
		while(s[i].s[2]<0 || s[i].s[2]>100){
			gotoxy(29,11);
			printf("Invalid Input!");
			sound(250);
			delay(500);
			nosound();
			getch();
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			printf("              ");
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			scanf("%d",&s[i].s[2]);
		}
		gotoxy(18,12);
		printf(" PEL121 - ");
		scanf("%d",&s[i].s[3]);
		while(s[i].s[3]<0 || s[i].s[3]>100){
			gotoxy(29,12);
			printf("Invalid Input!");
			sound(250);
			delay(500);
			nosound();
			getch();
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			printf("              ");
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			scanf("%d",&s[i].s[3]);
		}
		gotoxy(18,13);
		printf(" MTH145 - ");
		scanf("%d",&s[i].s[4]);
		while(s[i].s[4]<0 || s[i].s[4]>100){
			gotoxy(29,13);
			printf("Invalid Input!");
			sound(250);
			delay(500);
			nosound();
			getch();
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			printf("              ");
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			scanf("%d",&s[i].s[4]);
		}
		gotoxy(18,14);
		printf(" MEC103 - ");
		scanf("%d",&s[i].s[5]);
		while(s[i].s[5]<0 || s[i].s[5]>100){
			gotoxy(29,14);
			printf("Invalid Input!");
			sound(250);
			delay(500);
			nosound();
			getch();
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			printf("              ");
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			scanf("%d",&s[i].s[5]);
		}
		gotoxy(18,15);
		printf(" Activity - ");
		scanf("%d",&s[i].s[6]);
		while(s[i].s[6]<0 || s[i].s[6]>100){
			gotoxy(31,15);
			printf("Invalid Input!");
			sound(250);
			delay(500);
			nosound();
			getch();
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			printf("              ");
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			scanf("%d",&s[i].s[6]);
		}
		i++;
	}
	menu();
}

void cal_att(){
	int i,j;
	float total[100]={0};
	clrscr();
	for(i=0;i<n;i++){
		for(j=0;j<7;j++)
			total[i]+=s[i].s[j];
		att[i]=total[i]/7;
	}
	printf("NAME\t\t\t\tATTENDANCE\n");
	printf("-------------------------------------------\n");
	for(i=0;i<n;i++)
		printf("%d) %-10s\t\t\t%.2f%\n",i+1,s[i].name,att[i]);
	getch();
	closegraph();
	menu();
}

void det_stat(){
	int i,j;
	clrscr();
	printf("STUDENT's NAME\t\tCSE101\tECE131\tPHY109\tPEL121\tMTH145\tMEC103\tActivity\n");
	printf("-------------------------------------------------------------------------------\n");
	for(i=0;i<n;i++){
		printf("%d) %-21s",i+1,s[i].name);
		for(j=0;j<7;j++){
			if(s[i].s[j]<65)
				printf("D\t");
			else if(s[i].s[j]>=65 && s[i].s[j]<75)
				printf("PD\t");
			else if(s[i].s[j]>=75)
				printf("S\t");
		}
		printf("\n");
	}
	getch();
	menu();
}

void cal_days(){
	int nod[100][7],i,j;
	clrscr();
	for(i=0;i<n;i++){
		for(j=0;j<7;j++)
			nod[i][j] = ((t*75)/100) - ((s[i].s[j]*td)/100);
	}
	printf("STUDENT's NAME\t    CSE101\tECE131\tPHY109\tPEL121\tMTH135\tMEC103\tActivity\n");
	printf("-----------------------------------------------------------------------------\n");
	for(i=0;i<n;i++){
		printf("%d) %-20s",i+1,s[i].name);
		for(j=0;j<7;j++){
			if(s[i].s[j]<75)
				printf("%-5d\t",nod[i][j]);
			else
				printf("%-5d\t",0);
		}
	}
	getch();
	menu();
}

void menu() {
	int n,i;
	clrscr();
	gotoxy(22,5);
	printf("");
	gotoxy(22,6);
	printf("|                                      |");
	gotoxy(22,7);
	printf("| 1. Current Attendance                |");
	gotoxy(22,8);
	printf("|                                      |");
	gotoxy(22,9);
	printf("| 2. Detainee Status                   |");
	gotoxy(22,10);
	printf("|                                      |");
	gotoxy(22,11);
	printf("| 3. Number of class to avoid detainee |");
	gotoxy(22,12);
	printf("|                                      |");
	gotoxy(22,13);
	printf("| 4. Check for more records            |");
	gotoxy(22,14);
	printf("|                                      |");
	gotoxy(22,15);
	printf("| 5. Exit Program                      |");
	gotoxy(22,16);
	printf("|                                      |");
	gotoxy(22,17);
	printf("");
	gotoxy(25,20);
	printf("Enter your choice : ");
	scanf("%d",&n);
	switch(n){
		case 1:
			cal_att();
			break;
		case 2:
			det_stat();
			break;
		case 3:
			cal_days();
			break;
		case 4:
			enter();
			break;
		case 5:
			clrscr();
			gotoxy(25,10);
			printf("THANK YOU FOR EXPLORING ME! ");
			gotoxy(28,15);
			printf("Closing Program");
			for(i=0;i<5;i++){
				gotoxy(44+i,15);
				printf(".");
				delay(500);
			}
			exit(0);
		default:
			clrscr();
			gotoxy(35,12);
			printf("Invalid Input!");
			sound(250);
			delay(700);
			nosound();
			menu();
			break;
	}
}