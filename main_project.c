//---------------------------------Hostel Management System ---------------------------------

//including header files
#include <stdio.h>		//printf(),scanf(),etc
#include<windows.h>		//system("pause"),system("cls"),etc
#include <string.h>		//strcpy(),strcmp(),etc
#include <conio.h>		//getch(),etc
#include<ctype.h>		//isdigit(),isalpha(),etc
//declaring structure Student
typedef struct Student
{
    char studentName[50];		//max limit=50
    char studentId[4];			//max limit=4
    char studentDept[10];		//max limit=10
    char studentHostel[3];		//max limit=3
    char studentContactNum[10];	//max limit=10
    int studentRoomno;
    
} Student;

//declaring functions
void createAccount();	//create new student account
void displayInfo();		//display student information
void updateInfo();		//update student record
void deleteInfo();		//delete record
void searchInfo();		//search record

//main function
int main()
{  
	//-----------------------------------login-----------------------------------------
	int a=0,i=0,f=0,luc;
	char uname[10],c=' '; 
     char pword[10],code[10];
     char user[10]="Admin";
     char pass[10]="@test";
  
    do
{
	system("cls");
	printf("\n\n\t\t\t\t\t\xB11------- HOSTEL DATABASE MANAGEMENT SYSTEM -------\xB10\n");
	pword[i]='\0';
     printf(" \n\t\t\t\t                   ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n\t\t\t\t                   ENTER PASSWORD:-");
	
	while(i<6)//max password limit 
	{
	    pword[i]=getch();	//to read single character at a time and masking of password
	    c=pword[i];
	    if(c==13) break;//ascii code for enter key/if user press enter
	    else printf("*");
	    i++;
	}
	
	pword[i]='\0';
	i=0;
 
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("\n\n\n\t\t\t\t\t\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12\xC12");
	printf("  \n\n\t\t\t\t\t\t\tWELCOME ADMIN!!!! \n\t\t\t\t\t\t       LOGIN IS SUCCESSFUL\n\n\n");
	system("PAUSE");
	
	break;
	}
	else
	{
		printf("\n\n\t\t\t\t       SORRY !!!!  LOGIN IS UNSUCESSFUL\n");
		printf("\n\t\t\t\t%d tries left!\n",2-a);
		system("PAUSE");
		a++;
		getch();
	}
 }
	while(a<=2);
	if (a>2)
		{
		printf("\n\t\t\tSorry you have entered the wrong username or password for three times!!!");
		printf("\n\t\t\tEnter your lucky number:");
		scanf("%d",&luc);
		getch();
			if(luc==13)
			{
			printf("\n\t\t\tYour password is :@test");
			getch();
			}
			else if(luc!=13)
			{
				f++;
				printf("Wrong input!");
				getch();
			}
				}

	getch();
	if(f==0)
	{
	//----------------------------------menu-----------------------------------------------------	
	system("cls"); 
	char option;
    while (option != '0')	
    {
        system("cls");
        printf("\n\n\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|Hostel Management Database System|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| \n");
        printf("\n\t\t\t\t\t1. Create New Student Account");
        printf("\n\t\t\t\t\t2. Display All Students Information");
        printf("\n\t\t\t\t\t3. Update Student Information");
        printf("\n\t\t\t\t\t4. Delete Student Information");
        printf("\n\t\t\t\t\t5. Search Student Information");
        printf("\n\t\t\t\t\t0. Exit");
	    printf("\n\n\t\t\t\t\t\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8\xC8");
	    printf("\n\t\t\t\t\t\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9\xC9");
	    printf("\n\t\t\t\t\tEnter Your Option: ");
	   scanf(" %c", &option);
	       
        switch (option)
        {
        case '1':
            createAccount();
            break;
        case '2':
            displayInfo();
            break;
        case '3':
            updateInfo();
            break;
        case '4':
            deleteInfo();
            break;
        case '5':
            searchInfo();
            break;
        case '0':        	  
            printf("\n\t\t\t\t\t\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10Thank You\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10");
            break;
        default:
            printf("\n\t\t\tInvalid Option, Please Enter Right Option !\n");
            getch();
        }
       }
 	}
    return 0;
}
//--------------------------------------------------------------------------------------------
void createAccount()
{	char g[3]="Gh";
	char b[3]="Bh";
	int temp_rn;
	char rnstr[2];
	FILE *fileOne = fopen("studentInfo.bin", "ab+");//data is stored in binary format
    if (fileOne == NULL)	//if file do not open
    {
        printf("\n\t\t\t\t\tError !\n");
    }
    Student studentInformation;
    system("cls");
    printf("\n\n\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| Create New Student Account |\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\n");
    printf("\n\t\t\t\t\tEnter Student's Name : ");
    getchar();
    gets(studentInformation.studentName);
    int err=0;
    for(int n=0;studentInformation.studentName[n]!='\0';n++)
    {
    	if(isalpha(studentInformation.studentName[n])==0)
    	  err++;
    }
    if(err==0)	//error control for name
    	{
	   printf("\t\t\t\t\tEnter Student's ID : ");
	   gets(studentInformation.studentId);
	   int err1=0;//error handling
     for(int m=0;m<3;m++)
	 {
	  if(isdigit(studentInformation.studentId[m])==0)
	  err1++;
	 }
	    if(strlen(studentInformation.studentId)==3 && err1==0)	//error control for id
	    {
	    printf("\t\t\t\t\tEnter Student's Department : ");
	    gets(studentInformation.studentDept);
	    int err2=0;
	    for(int k=0;studentInformation.studentDept[k]!='\0';k++)
	    {
	        if(isalpha(studentInformation.studentDept[k])==0)
	    	err2++;
	    }
		if(err2==0)	//error control for department
		{
		    printf("\t\t\t\t\tEnter Student's Hostel[Bh,Gh] : ");
		    gets(studentInformation.studentHostel);
		    if(strcmp(studentInformation.studentHostel,g)==0||strcmp(studentInformation.studentHostel,b)==0)	//error control for hostel
		    {
		    printf("\t\t\t\t\tEnter Student's Contact Number : ");
		    gets(studentInformation.studentContactNum);
		    int err3=0; //error handling
		    for(int j=0;j<10;j++)
		    {
		    	if(isdigit(studentInformation.studentContactNum[j])==0)
		    	 err3++;
		    }
    			    if(strlen(studentInformation.studentContactNum)==10 && err3==0)	//error control for contact number
			    {
			    printf("\t\t\t\t\tEnter Student's Current room no : ");
			    scanf("%d",&studentInformation.studentRoomno);
			    int err_rn=0;
			    temp_rn=studentInformation.studentRoomno;
			    sprintf(rnstr, "%d", temp_rn);
			    for(int l=0;l<2;l++)
			    {
			    if(isdigit(rnstr[l])==0)
			    	err_rn++;
			    }
			    	if(strlen(rnstr)<3 && err_rn==0)	
				    
				    {
				    	fwrite(&studentInformation, sizeof(studentInformation), 1, fileOne);
				     printf("\n\n\t\t\t\t\t\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10 Informations have been stored sucessfully \xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\n");
				     printf("\n\n\t\t\t\t\tEnter any keys to continue.......");
				     getch();
				     fclose(fileOne);
				     }
				    
					else
					{
						printf("\n\t\t\t\t\tEnter valid Room number.\n");
						system("pause");
					}
				}
			   	else	//if error occurs for contact number
				{
					printf("\n\t\t\t\t\tEnter valid Contact number.\n\t\t\t\t\t[ size=10 / Digits=[0-9]].\n");
					system("pause");
				}
			   }
		   else	//if error occurs for hostel
			{
				printf("\n\t\t\t\t\tEnter correct option[Gh/Bh].\n");
				system("pause");
			}
		   }
	    else	//if error occurs for department
	    {
	    		printf("\n\t\t\t\t\tEnter valid character.\n");
	    		system("pause");
	    }
	   }
   	else	//if error occurs for id
	{
		printf("\n\t\t\t\t\tEnter valid id .\n\t\t\t\t\t[ digits[0-9] / size=3].\n");
		system("pause");
	}
   }
	else	///if error occurs for name
  {
 	printf("\n\t\t\t\t\tEnter valid characters.\n");
 	system("pause");
  
   }
   
}

//------------------------------------------------------------------------------------------
void displayInfo()
{	system("cls");	
    FILE *fileOne = fopen("studentInfo.bin", "r");//data is read
    
    Student studentInformation; //variable of student type to read information of each student

	char studentHOstel[3]; int choi,flag=0;
	
    if (fileOne == NULL)	//if file do not open
    {
        printf("\n\t\t\t\t\tError !\n");
        system("cls");
    }
    printf("\n\n\t\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| All Students Information |\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\n");
	printf("\n\t\t\t\t\t\tPress 1 to display Separate Records of Gh/Bh:");
	printf("\n\t\t\t\t\t\tPress 2 to display all records :");
	printf("\n\n \t\t\t\t\t\t\t-\xB10 ");
	scanf("%d",&choi);
	if (choi == 1)	//display saparate records of girls and boys hostel
    { 
        system("cls");
        printf("\n\n\t\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| All Student Information |\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\n");       
	    printf("\n\n\t\t\t\t\t\tDisplay records of Hostel Gh/Bh : ");
        getchar();
        gets(studentHOstel);
        system("cls");
        char strg[3]="Gh";
        char strb[3]="Bh";
        if(strcmp(studentHOstel,strg) == 0)	//display records of girls hostel
        {
	    printf("\n\t\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| Girls Hostel Information|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|");
        printf("\n\n\t\t\t\t\t\t%-20s%-13s%-10s%-25s%-15s%-s\n", "Name", "ID", "Dept.", "Hostel", "Contact", "Room no");
    	printf("\t\t\t\t\t\t----------------------------------------------------------------------------------------");
	   }
	  if(strcmp(studentHOstel,strb) == 0)	//display records of boys hostel
	   {
	    printf("\n\t\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| Boys Hostel Information|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|");
        printf("\n\n\t\t\t\t\t\t%-20s%-13s%-10s%-25s%-15s%-s\n", "Name", "ID", "Dept.", "Hostel", "Contact", "Room no");
    	printf("\t\t\t\t\t\t----------------------------------------------------------------------------------------");
	   }
	    while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
        {        	    	
            if (strcmp(studentInformation.studentHostel, studentHOstel) == 0)
            {
                flag++;
                printf("\n\n\t\t\t\t\t\t%-20s%-13s%-10s%-25s%-15s%-d\n", studentInformation.studentName, studentInformation.studentId, studentInformation.studentDept, studentInformation.studentHostel, studentInformation.studentContactNum, studentInformation.studentRoomno);
            }
        
	   }
        if (flag == 0)
        {
            printf("\n\t\t\t\t\t\t\t\xB9\xB9\xB9\xB9\xB9| Student Hostel not found! |\xB9\xB9\xB9\xB9\xB9");
        }
    }

   else if (choi == 2)	//display all records
    {
        system("cls");
        printf("\n\t\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|Hostel Information|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|");
        printf("\n\n\t\t\t\t\t\t%-20s%-13s%-10s%-25s%-15s%-s\n", "Name", "ID", "Dept.", "Hostel", "Contact", "Room no");
        printf("\t\t\t\t\t\t----------------------------------------------------------------------------------------");
	 {
	    while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
	    {	
	        printf("\n\n\t\t\t\t\t\t%-20s%-13s%-10s%-25s%-15s%-d", studentInformation.studentName, studentInformation.studentId, studentInformation.studentDept, studentInformation.studentHostel, studentInformation.studentContactNum, studentInformation.studentRoomno);
	    }
	   getch();
	 }
    }
         else
	    {
	        printf("\n\t\t\t\t\tInvalid Option");
	    }
    fclose(fileOne);
    printf("\n\n\n\t\t\t\t\tEnter any keys to continue.......");
    getch();
}
//-----------------------------------------------------------------------------------------------------------------------
void updateInfo()
{
    FILE *fileOne = fopen("studentInfo.bin", "rb");
    FILE *temp = fopen("temp.bin", "wb");	//temporary file
	
    Student studentInformation, tempInformation;//variables to access each student's info

    int choice, flag = 0;

    if (fileOne == NULL || temp == NULL)	//if file is not open
    {
        printf("\n\t\t\t\t\tError !\n");
    }

    system("cls");

    printf("\n\n\t\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| Update Students Information |\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\n");

    printf("\n\n\t\t\t\t\t\tEnter Student's ID : ");
    getchar();
    gets(tempInformation.studentId);

    while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
    {
        if (strcmp(studentInformation.studentId, tempInformation.studentId) == 0)
        {
            flag++;
            printf("\n\t\t\t\t\t\t\tChoose your option :\n\t\t\t\t\t\t\t1.Update Student Name\n\t\t\t\t\t\t\t2.Update Student Dept.\n\t\t\t\t\t\t\t3.Update Student Hostel\n\t\t\t\t\t\t\t4.Update Student Contact No.\n\t\t\t\t\t\t\t5.Update Student Room no.");
            printf("\n\n\t\t\t\t\t\t\tEnter Your Option : ");
            scanf("%d", &choice);
            if (choice == 1)	//update name
            {
                printf("\n\t\t\t\t\t\t\tEnter Student's Name to Update: ");
                getchar();
                gets(tempInformation.studentName);
                int err0=0;
    			for(int n=0;tempInformation.studentName[n]!='\0';n++)
    			{
    			 if(isalpha(tempInformation.studentName[n])==0)
    	  		 err0++;
    			}
   			 if(err0==0)
   			 {
                strcpy(studentInformation.studentName, tempInformation.studentName);

                fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                printf("\n\n\t\t\t\t\t\t\t\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10 Updated successfully! \xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\n\n");
                }
                else
                {
                	printf("\n\t\t\t\t\tEnter valid characters.\n");
                	system("pause");
			 }
		  }
            else if (choice == 2)	//update dept
            {
            	
                printf("\n\t\t\t\t\t\t\tEnter Student's Dept. to Update: ");
                getchar();
                gets(tempInformation.studentDept);
                int err_2=0;
	  	        for(int k=0;tempInformation.studentDept[k]!='\0';k++)
			    {
			    	if(isalpha(tempInformation.studentDept[k])==0)
			    	  err_2++;
			    }
			if(err_2==0)
			{
                strcpy(studentInformation.studentDept, tempInformation.studentDept);

                fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                printf("\n\n\t\t\t\t\t\t\t\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10 Updated successfully! \xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\n\n");
               }
               else
               {
			   printf("\n\t\t\t\t\tEnter valid characters.\n");
               system("pause");
          	}
       	}
            else if (choice == 3)	//update hostel
            {	char g1[3]="Gh";
            	char b1[3]="Bh";
                printf("\n\t\t\t\t\t\t\tEnter Student's Hostel to Update: ");
                getchar();
                gets(tempInformation.studentHostel);
                if(strcmp(tempInformation.studentHostel,g1)==0||strcmp(tempInformation.studentHostel,b1)==0)
    			{
			    strcpy(studentInformation.studentHostel, tempInformation.studentHostel);
	            fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
     	        printf("\n\n\t\t\t\t\t\t\t\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10 Updated successfully! \xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\n\n");
            	}
            	else
            	{
            	printf("\n\t\t\t\t\tWrong input,please enter[Gh/Bh]");
			  	system("pause");
			}
		  }
            else if (choice == 4)	//update contact no
            {
                printf("\n\t\t\t\t\t\t\tEnter Student's Contact No. to Update: ");
                getchar();
                gets(tempInformation.studentContactNum);
                int err_3=0; //error handling
		       for(int j=0;j<10;j++)
		      {		
		    	if(isdigit(studentInformation.studentContactNum[j])==0)
		    	 err_3++;
		      }
    		    if(strlen(studentInformation.studentContactNum)==10 && err_3==0)
		     {
                strcpy(studentInformation.studentContactNum, tempInformation.studentContactNum);
	           fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                printf("\n\n\t\t\t\t\t\t\t\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10 Updated successfully! \xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\n\n");
     		}
     		else
     		{
     			printf("\n\t\t\t\t\tEnter valid digits.\n");
     			system("pause");
			}
		  }
            else if (choice == 5)	//update room no
            {
               printf("\n\t\t\t\t\t\t\tEnter Student's Room no to Update: ");
              scanf("%d", &tempInformation.studentRoomno);
              
             if(tempInformation.studentRoomno>0 && tempInformation.studentRoomno<100)
           	{
                studentInformation.studentRoomno = tempInformation.studentRoomno;
                fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
                printf("\n\n\t\t\t\t\t\t\t\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10 Updated successfully! \xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\n\n");
           	}
              	else
			 {
           		printf("\n\t\t\t\t\tEnter valid digits.\n");
           		getch();
           		system("pause");
			 }
			 
        	   }
            else	//if any other option rather than (1-5) is entered 
            {
                printf("\n\t\t\t\t\tInvalid Option.");
                fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
            }
        }
        else	//if temp_id != stud_id it will display records of file studentinfo
        {
            fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
        }
    }

    fclose(fileOne);
    fclose(temp);

    remove("studentInfo.bin");	//file with old unmodified records
    rename("temp.bin", "studentInfo.bin");	//file with updated records

    if (flag == 0)	//if student id is not in record
    {
        printf("\n\t\t\t\t\tStudent Id is not found");
    }

    printf("\n\n\t\t\t\t\tEnter any keys to continue.......");
    getch();
}
//---------------------------------------------------------------------------------------------------------
void deleteInfo()
{
    FILE *fileOne = fopen("studentInfo.bin", "rb");
    FILE *temp = fopen("temp.bin", "wb");	//temporary file

    Student studentInformation, tempInformation;

    int choice, flag = 0;

    if (fileOne == NULL || temp == NULL)	//if file doesn't opens
    {
        printf("\n\t\t\t\t\tError !\n");
    }

    system("cls");

    printf("\n\n\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| Delete Student Information |\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\n");

    printf("\n\t\t\t\t\tEnter Student's ID : ");
    getchar();
    gets(tempInformation.studentId);

    while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
    {
        if (strcmp(studentInformation.studentId, tempInformation.studentId) == 0)	//delete record with student id
        {
            flag++;
            printf("\n\t\t\t\t\tAre you sure to delete ??\n\t\t\t\t\t1.Yes\n\t\t\t\t\t2.Back\n\t\t\t\t\tEnter Your Option : ");
            scanf("%d", &choice);	//confirmation of choice
            if (choice == 1)
            {
                printf("\n\n\t\t\t\t\t\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10 Information has been deleted successfully! \xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\xB11\xB10\n\n");
            }
            else if (choice == 2)
            {
                fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
            }
            else
            {
                printf("\n\t\t\t\t\tInvalid Option");
                fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
            }
        }
        else
        {
            fwrite(&studentInformation, sizeof(studentInformation), 1, temp);
        }
    }

    fclose(fileOne);
    fclose(temp);

    remove("studentInfo.bin");	//removing file 
    rename("temp.bin", "studentInfo.bin");	//updated file with deleted records

    if (flag == 0)	//if student id is not in record
    {
        printf("\n\t\t\t\t\tStudent Id is not found");
    }

    printf("\n\n\t\t\t\t\tEnter any keys to continue.......");
    getch();
}
//-------------------------------------------------------------------------------------------------------
void searchInfo()
{
    FILE *fileOne = fopen("studentInfo.bin", "rb");
    Student studentInformation;
    int choice, flag = 0;
    char studentID[3], studentDept[10];
    if (fileOne == NULL)	//if file doesn't open
	{ printf("\n\t\t\t\t\tError !\n");}

    system("cls");
    printf("\n\n\t\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| Search Student Information |\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\n");
    printf("\n\t\t\t\t\t\tChoose your option :\n\t\t\t\t\t\t1.Search by Student ID:- \n\t\t\t\t\t\t2.Search by Student Dept:- ");
    printf("\n\n\t\t\t\t\t\tEnter Your Option : ");
    scanf("%d", &choice);	
    if (choice == 1)	//search via student id
    {
        system("cls");
        printf("\n\n\t\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| Search Student Information |\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\n");
        printf("\n\n\t\t\t\t\t\tEnter Student ID : ");
        getchar();
        gets(studentID);
        while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
        {        	    	
            if (strcmp(studentInformation.studentId, studentID) == 0)
            {
                flag++;
                printf("\n\t\t\t\t\t\tStudent Name : %s\n\t\t\t\t\t\tStudent ID : %s\n\t\t\t\t\t\tStudent Dept. : %s\n\t\t\t\t\t\tStudent Hostel : %s\n\t\t\t\t\t\tStudent Contact No. : %s\n\t\t\t\t\t\tStudent Room no : %d\n", studentInformation.studentName, studentInformation.studentId, studentInformation.studentDept, studentInformation.studentHostel, studentInformation.studentContactNum, studentInformation.studentRoomno);
            }
        }
        if (flag == 0)	//if student id is not in record
        {
            printf("\n\t\t\tStudent Id is not found");
        }
    }
    else if (choice == 2)	//search via student dept
    {
        system("cls");
        printf("\t\t\t\t\t\t|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1| Search Student Information |\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\xB1\xB1|\n");
        printf("\n\n\t\t\t\t\t\tEnter Student Dept. : ");
        getchar();
        gets(studentDept);
        printf("\n\n\t\t\t\t\t\t%-20s%-13s%-10s%-25s%-15s%-s\n", "Name", "ID", "Dept.", "Hostel", "Contact", "Room no");
        printf("\t\t\t\t\t\t----------------------------------------------------------------------------------------");
        while (fread(&studentInformation, sizeof(studentInformation), 1, fileOne) == 1)
        {
            if (stricmp(studentInformation.studentDept, studentDept) == 0)
            {
                flag++;
                printf("\n\n\t\t\t\t\t\t%-20s%-13s%-10s%-25s%-15s%-d", studentInformation.studentName, studentInformation.studentId, studentInformation.studentDept, studentInformation.studentHostel, studentInformation.studentContactNum, studentInformation.studentRoomno);
            }
        }
        if (flag == 0)	//if student dept is not in record
        {
            printf("\n\t\t\t\t\t\tStudent Department is not found");
        }
    }
    else
    printf("\n\t\t\t\t\t\tInvalid Option");
    
    fclose(fileOne);
    printf("\n\n\n\t\t\t\t\t\tEnter any keys to continue.......");
    getch();

}