#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//For member coding..............$$$...............$$...................$..................

int member()
{
	int choice;
	int i=0;
	for(i=0; i<3; i++)
    {
      	printf("\n.....OPENING MEMBER SECTION......");
      	Sleep(800);
      	system("cls");
      	Sleep(500);
    }
	printf("\n--------Member--------");
	point:printf("\n1. Add New member\n2. Edit Member\n3. Suspend Member\n4. Search Member\nEnter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: add_member(); break;
		case 2: editmember(); break;
		case 3: suspendmember(); break;
		case 4: searchmember(); break;
		default: printf("\nInvalid Choice\n");
		if(choice>=4)
		{
			printf("-------------------------------------------------");
			printf("\nPlease Enter valid Choice");
			goto point;
		}
	}
	
}

struct Members
{
	
	char name[100];
	char gender[10];
	int number;
	int dob;
};


// Select 1 Add Member coding..............$$$...............$$...................$..................
int add_member()
{
	int i=0;
	for(i=0; i<3; i++)
    {
      	printf("\n.....OPENING ADD MEMBER SECTION......");
      	Sleep(800);
      	system("cls");
      	Sleep(500);
    }
	
	printf("\n------Add Member------");
	FILE *fp;
	struct Members m;
	
	fp=fopen("member.dat","a");
	printf("\n1.Full Name:");
	fflush(stdin);
	gets(m.name);
	
	fp=fopen("member.dat","a");
	printf("\n2.DOB(dd-mm-yyyy):");
	fflush(stdin);
	scanf("%d",&m.dob);
	
	fp=fopen("member.dat","a");
	printf("\n3.Gender:");
	fflush(stdin);
	gets(m.gender);
	
	fp=fopen("member.dat","a");
	there:printf("\n4.Mobile Number:");
	
	scanf("%s",&m.number);
	int len;
	len = strlen(m.number);
	if(len!=10)
	{
		printf("\nInvalid Mobile Number\nPlease Enter Valid Mobile Number");
		goto there;
	}
	else
	{
		for(i=0; i<3; i++)
    	{
      		printf("\n.....Successfully Updated......");
      		Sleep(500);
      		system("cls");
      		Sleep(500);
    	}
    	printf("\nThank You");
	}	
}
// Select 2 Edit Member coding..............$$$...............$$...................$..................
void editmember()
{
	int i=0,j;
	for(i=0; i<3; i++)
    {
      	printf("\n.....OPENING EDIT MEMBER SECTION......");
      	Sleep(800);
      	system("cls");
      	Sleep(500);
    }
    for(i=0;i<=5;i++)
    {
    	for(j=0;j<=i;j++)
    	{
    		printf(" SOFTWARE ON MAINTANCE");
		}
		printf("\n");
	}
	
}

// Select 3 SUSPEND Member coding..............$$$...............$$...................$..................
void suspendmember()
{
	int i=0,j;
	for(i=0; i<3; i++)
    {
      	printf("\n.....OPENING SUSPEND MEMBER SECTION......");
      	Sleep(800);
      	system("cls");
      	Sleep(500);
    }
    for(i=0;i<=5;i++)
    {
    	for(j=0;j<=i;j++)
    	{
    		printf(" SOFTWARE ON MAINTANCE");
		}
		printf("\n");
	}
}

// Select 4 Search Member coding..............$$$...............$$...................$..................
void searchmember()
{
	int i=0,j;
	for(i=0; i<3; i++)
    {
      	printf("\n.....OPENING SUSPEND MEMBER SECTION......");
      	Sleep(800);
      	system("cls");
      	Sleep(500);
    }
    for(i=0;i<=5;i++)
    {
    	for(j=0;j<=i;j++)
    	{
    		printf(" SOFTWARE ON MAINTANCE");
		}
		printf("\n");
	}
}






//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//inventory coding here..............$$$...............$$...................$..................
int inventory()
{
	int choice;
	int i=0;
	for(i=0; i<3; i++)
    {
      	printf("\n.....OPENING INVENTORY SECTION......");
      	Sleep(500);
      	system("cls");
      	Sleep(500);
    }
    printf("\n------INVENTORY------\n");
	top:printf("\n1. Add New Book\n2. Add Book Category \n3. Edit Book\n4. Issue Book\n5. Receive Book\n6. Search Book\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: add_new_book(); break;
		case 2: break;
		case 3: break;
		case 4: break;
		case 5: break;
		case 6: break;
		default: printf("\nInvalid Choice\n");
		if(choice>=6)
		{
			printf("-------------------------------------------------");
			printf("\nPlease Enter valid Choice");
			goto top;
		}
	}
}
struct Book
{
	char book_id[50];
	char book_cat[50];
	char book_name[50];
	char book_pub[50];
	char book_writer[50];
	float book_price;
	int book_qty;
};

void add_new_book()
{
	int i=0;
	for(i=0; i<3; i++)
    {
      	printf("\n.....OPENING Add New Book SECTION......");
      	Sleep(500);
      	system("cls");
      	Sleep(500);
    }
    printf("\n------Add New Book------\n");
	FILE *fp;
	struct Book b;
	fp=fopen("book.dat","a");
	printf("Enter Book Category:");
	fflush(stdin);
	gets(b.book_cat);
	
	fp=fopen("book.dat","a");
	printf("Enter Book ID:");
	fflush(stdin);
	gets(b.book_id);
	
	fp=fopen("book.dat","a");
	printf("Enter Book Name:");
	fflush(stdin);
	gets(b.book_name);
	
	fp=fopen("book.dat","a");
	printf("Enter Book Publisher:");
	fflush(stdin);
	gets(b.book_pub);
	
	fp=fopen("book.dat","a");
	printf("Enter Book Writer:");
	fflush(stdin);
	gets(b.book_writer);
}



//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//For report coding..............$$$...............$$...................$..................
void report()
{
	int choice;
	int i=0;
	for(i=0; i<3; i++)
    {
      	printf("\n.....OPENING REPORT SECTION......");
      	Sleep(500);
      	system("cls");
      	Sleep(500);
    }
	head:printf("\n1. Member List\n2. Book List\n3. Book Categories List\n4. Issued Book List\n5. Suspended Members List\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: break;
		case 2: break;
		case 3: break;
		case 4: break;
		case 5: break;
		default: printf("\nInvalid Choice\n");
		if(choice>=6)
		{
			printf("-------------------------------------------------");
			printf("\nPlease Enter valid Choice");
			goto head;
		}
	}
}




//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//For Main Body coding..............$$$...............$$...................$..................
int main()
{
	char user[50],pass[50],ch;
	int i,attempt=0,choice;
	for(i=0; i<3; i++)
    {
      		printf("                  Welcome to Library Management System\n`````````````````````````````````````````````````````````````````````````");
      		Sleep(1000);
      		system("cls");
      		Sleep(500);
    }
	printf("                  Welcome to Library Management System\n`````````````````````````````````````````````````````````````````````````");
	printf("\n     LOGIN\n```````````````\n");
	up:printf("User Id: ");
	gets(user);
	printf("Password: ");
	
	i=0;
	while((ch = getch())!= '$')
	{
		printf("*");
		pass[i]=ch;
		i++;
	}
	pass[i]='\0';
	
	printf("\n");
	if((strcmp(user,"admin")==0)&&(strcmp(pass,"admin")==0))
	{
		for(i=0; i<3; i++)
    	{
      		printf("\n.....!!!Login Sucessfull!!!......");
      		Sleep(500);
      		system("cls");
      		Sleep(500);
    	}
		
		
		printf("\n```````````````````\n~~Welcome User~~\n```````````````````");
		
		here:printf("\n1. Memeber\n2. Inventory\n3. Report\nEnter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: member(); break;
			case 2: inventory(); break;
			case 3: report(); break;
			default: printf("Invalid Choice\n");
			if(choice>=4)
			{
				printf("-------------------------------------------------");
				printf("\nPlease Enter valid Choice");
				goto here;
			}  
		}
		
	}
	else
	{
		attempt++;
		if(attempt==3)
		{
			exit(0);
		}
		printf("\nInvalid Login Credintial");
		printf("\nPlease enter valid login credentials\n");
		goto up;
	}
	return 0;
}
