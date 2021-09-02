#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

void login()
{
  FILE *fp;

  char n[250],p[250],confirm[10];
  
  fp = fopen("user.txt", "w");
  system("cls");
  if (fp != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    
  }
  printf("\n\t:::::::::::::::::::::::::::::::::::::::::::::  WELCOME TO SIGN UP PAGE ::::::::::::::::::::::::::::::::::::::::::::  ");

  printf("\n\n\t\t\t\t\t\t\tCREATE USERNAME:-");
  gets(n);
  initial:
  printf("\n\t\t\t\t\t\t\tCREATE 4 DIGIT PASSWORD:-");
  gets(p);
  printf("\n\t\t\t\t\t\t\tCONFIRM PASSWORD:-");
  gets(confirm);

  if (strcmp(p,confirm)==0){
      goto process;
      
  }
  else {
  printf("\n\t\t::::::::::::::::::::::::::::::::::::::::  SORRY WRONG PASSWORD  :::::::::::::::::::::::::::::::::::::::  ");
  goto initial;
  }

 process: 
  fprintf(fp, "%s %s", n, p);
  fclose(fp);

  fp=fopen("user.txt","r");

  int flag,i=1,num;
  char uname[25],pword[25],username[25],password[25],code;

  fscanf(fp,"%s%s",uname,pword);
  loginform:
  system("cls");
  Sleep(500);
  printf("\t");
  for (i; i <= 50; i++)
  {
    printf(":");
    Sleep(10);
  }

  printf("  LOGIN FORM  "); 

  for (i=1; i <= 50; i++)
  {
    printf(":");
    Sleep(10);
  }

  process1:
  printf("\n\n\t\t\t\t\t\t\tENTER USERNAME:-");
  gets(username);
  printf("\n\t\t\t\t\t\t\tENTER PASSWORD:-");
  for ( i = 0; i < 4; i++)
    {
      code=getch();
      password[i]=code;
      code='*';
      printf("%c",code);
        
    }
    getch();
    system("cls");

    printf("\t");
    for (i=1; i <= 118; i++)
  {
    printf(":");
    Sleep(5);
  }
    Sleep(1000);

    if ((strcmp(uname,username)==0) && (strcmp(pword,password)==0))
      {
        printf("\n\n\t\t\t\t\t\t\tLogin Sucessfull!!!");
        printf("\n\n");
        flag=1;
        printf("\n\t\t\t\t\t\tpress any key to continue...");
        getch();
        system("cls");
        goto welcome;  
      }
    else
      {
        printf("\n\n\t\t\t\t\t\t\tLogin Unsucessfull!!!");
        printf("\n\n");
        flag=0;
        printf("\n\n\t\t\t\t\t\tYou have entered wrong user id and password");
        printf("\n\t\t\t\t\t\tpress any key to continue...");
        getch();
        goto loginform;
      }
      welcome:
      printf("\033[0;36m");
      printf("\t\t\t\t\t\t\tW");
      Sleep(300);
      printf("E");
      Sleep(300);
      printf("L");
      Sleep(300);
      printf("C");
      Sleep(300);
      printf("O");
      Sleep(300);
      printf("M");
      Sleep(300);
      printf("E");
      Sleep(100);
      printf("\033[0m");
      printf("\033[0;31m");
      printf(" %s",username);
      printf("\033[0m");
      Sleep(100);
      printf(".");
      Sleep(100);
      printf(".");
      Sleep(100);
      printf(".");
      Sleep(100);
      printf(".");
      printf("\n\n\t\t\t\t\t\tpress any key to continue...");
      getch();
      system("cls");

      printf("\n1-> Add Student's Information.");
      printf("\n2-> View Student's Information.");
      printf("\n3-> Edit Student's Information.");
      printf("\n4-> Delete Student's Information.");
      printf("\n5-> Exit System");
      printf("\nPlease enter your choise:");
      scanf("%d",&num);
}

int main()
{
    login();
    return 0;
}