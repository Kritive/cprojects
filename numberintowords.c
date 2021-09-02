#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int num;
    char a[20];
    char *once[] = {""," One"," Two"," Three"," Four"," Five"," Six"," Seven"," Eight"," Nine"};
    char *double_digit[] = {""," Ten"," Eleven"," Twelve"," Thirteen"," Fourteen"," Fifteen"," Sixteen"," Seventeen"," Eighteen"," Nineteen"};
    char *tens[] ={"",""," Twenty"," Thirty"," Fourty"," Fifty"," Sixty"," Seventy"," Eighty"," Ninty"};
    
    printf("Enter a number:\n");
    scanf("%s",&a);

    int len = strlen(a);
    
//for one digit number

    if (len==1)
    {
        num= a[0]-48; //once
        printf("%s",once[num]);
    } 

//for two digit number
    if (len==2 && a[0]==49) //for 10 to 19
    {
        num= (a[0]-48)+(a[1]-48);
        printf("%s",double_digit[num]);
    }
    else if (len==2 && a[1]==48) //for 20,30,40,50,60,70,80,90
    {
        num= (a[0]-48)+(a[1]-48);
        printf("%s",tens[num]);
    }
    else if (len==2) //for remaining all two digit numbers less than 100
    {
        num = a[0]-48;
        printf("%s",tens[num]);
        num = a[1]-48;
        printf("%s",once[num]);
    }

//for three digit number 
if (len==3)
{
    num= a[0]-48; 
    printf("%s",once[num]);
    printf(" Hundred");
if (a[1]==49) 
    {
        num= (a[0]-48)+(a[1]-48);
        printf("%s",double_digit[num]);
    }
else
{
    num = a[1]-48;
    printf("%s",tens[num]); 
    num = a[2]-48;
    printf("%s",once[num]);
}
}

//for four digit number
if (len==4)
{
    num=a[0]-48;
    printf("%s",once[num]);
    printf(" Thousand");
    
    num= a[1]-48;
    if (a[1]-48==0)
    {
        /* code */
    }
    else
    {
        printf("%s",once[num]);
        printf(" Hundred");
    }
    
if (a[2]==49)
    {
        num= (a[2]-48)+(a[3]-48);
        printf("%s",double_digit[num]);
    }
else
{
    num = a[2]-48;
    printf("%s",tens[num]);
    num = a[3]-48;
    printf("%s",once[num]);
}
}
  
//for five digit number
if (len==5)
{
    if (a[0]-48==1)
    {
        num= (a[0]-48)+(a[1]-48);
        printf("%s",double_digit[num]);
        printf(" Thousand");
    }
    else
    {
        num = a[0]-48;
        printf("%s",tens[num]);
        num = a[1]-48;
        printf("%s",once[num]);
        printf(" Thousand");
    }

    num= a[2]-48;
    if (a[2]-48==0)
    {
        /* code */
    }
    else
    {
        printf("%s",once[num]);
        printf(" Hundred");
    }

    if (a[3]==49)
    {
        num= (a[3]-48)+(a[4]-48);
        printf("%s",double_digit[num]);
    }
    else
    {
        num = a[3]-48;
        printf("%s",tens[num]);
        num = a[4]-48;
        printf("%s",once[num]);
    }
}

//for six digit number
if (len==6)
{
    num=a[0]-48;
    printf("%s",once[num]);
    printf(" Lakh");

    if(a[1]-48==0)
    {
        if (a[2]-48!=0)
        {
            num=a[2]-48;
            printf("%s",once[num]);
            printf(" Thousand");
        } 
    }
    else if (a[1]-48==1)
    {
        num=(a[1]-48)+(a[2]-48);
        printf("%s",double_digit[num]);
        printf(" Thousand");
    }
    else
    {
        num=(a[1]-48);
        printf("%s",tens[num]);
        num=(a[2]-48);
        printf("%s",once[num]);
        printf(" Thousand");
    }
    
    if (a[3]-48==0)
    {
        /* code */
    }
    else
    {
        num=a[3]-48;
        printf("%s",once[num]);
        printf(" Hundred");
    }

    if (a[4]-48==1)
    {
        num=(a[4]-48)+(a[5]-48);
        printf("%s",double_digit[num]);
    }
    else
    {
        num=a[4]-48;
        printf("%s",tens[num]);
        num=a[5]-48;
        printf("%s",once[num]);
    }
}

//for seven digit number
if (len==7)
{
    if (a[0]-48==1)
    {
        num=(a[0]-48)+(a[1]-48);
        printf("%s",double_digit[num]);
        printf(" Lakh");
    }
    else
    {
        num=a[0]-48;
        printf("%s",tens[num]);
        num=(a[1]-48);
        printf("%s",once[num]);
        printf(" Lakh");
    }

    if (a[2]-48==0)
    {
        if (a[3]-48!=0)
        {
            num=a[3]-48;
            printf("%s",once[num]);
            printf(" Thousand");
        }       
    }
    else if (a[2]-48==1)
    {
        num=(a[2]-48)+(a[3]-48);
        printf("%s",double_digit[num]);
        printf(" Thousand");
    }
    else
    {
        num=a[2]-48;
        printf("%s",tens[num]);
        num=a[3]-48;
        printf("%s",once[num]);
        printf(" Thousand");
    }

    if (a[4]-48==0)
    {
        /* code */
    }
    else
    {
        num=a[4]-48;
        printf("%s",once[num]);
        printf(" Hundred");
    }
    if (a[5]-48==1)
    {
        num=(a[5]-48)+(a[6]-48);
        printf("%s",double_digit[num]);
    }
    else
    {
        num=a[5]-48;
        printf("%s",tens[num]);
        num=a[6]-48;
        printf("%s",once[num]);
    }                
}

//for eight digit number
if (len==8)
{
    num=a[0]-48;
    printf("%s",once[num]);
    printf(" Crore");

    if (a[1]-48==0)
    {
        if (a[2]-48!=0)
        {
            num=a[2]-48;
            printf("%s",once[num]);
            printf(" Lakh");
        }  
    }
    else if (a[1]-48==1)
    {
        num=(a[1]-48)+(a[2]-48);
        printf("%s",double_digit[num]);
        printf(" Lakh");
    }
    else
    {
        num=a[1]-48;
        printf("%s",tens[num]);
        num=a[2]-48;
        printf("%s",once[num]);
        printf(" Lakh");
    }  

    if (a[3]-48==0)
    {
        if (a[4]-48!=0)
        {
            num=a[4]-48;
            printf("%s",once[num]);
            printf(" Thousand");
        }  
    }
    else if (a[3]-48==1)
    {
        num=(a[3]-48)+(a[4]-48);
        printf("%s",double_digit[num]);
        printf(" Thousand");
    }
    else
    {
        num=a[3]-48;
        printf("%s",tens[num]);
        num=a[4]-48;
        printf("%s",once[num]);
        printf(" Thousand");
    }

    if (a[5]-48==0)
    {
        /* code */
    }
    else
    {
        num=a[5]-48;
        printf("%s",once[num]);
        printf(" Hundred");
    }

    if (a[6]-48==1)
    {
        num=(a[6]-48)+(a[7]-48);
        printf("%s",double_digit[num]);
    }
    else
    {
        num=a[6]-48;
        printf("%s",tens[num]);
        num=a[7]-48;
        printf("%s",once[num]);
    }  
}

//for nine digit number
if (len==9)
{
    if (a[0]-48==1)
    {
        num=(a[0]-48)+(a[1]-48);
        printf("%s",double_digit[num]);
        printf(" Crore");
    }
    else
    {
        num=a[0]-48;
        printf("%s",tens[num]);
        num=a[1]-48;
        printf("%s",once[num]);
        printf(" Crore");
    }

    if (a[2]-48==0)
    {
        if (a[3]-48!=0)
        {
            num=a[3]-48;
            printf("%s",once[num]);
            printf(" Lakh");
        }   
    }
    else if (a[2]-48==1)
    {
        num=(a[2]-48)+(a[3]-48);
        printf("%s",double_digit[num]);
        printf(" Lakh");
    }
    else
    {
        num=a[2]-48;
        printf("%s",tens[num]);
        num=a[3]-48;
        printf("%s",once[num]);
        printf(" Lakh");
    }

    if (a[4]-48==0)
    {
        if (a[5]-48!=0)
        {
            num=a[5]-48;
            printf("%s",once[num]);
            printf(" Thousand");
        }   
    }
    else if (a[4]-48==1)
    {
        num=(a[4]-48)+(a[5]-48);
        printf("%s",double_digit[num]);
        printf(" Thousand");
    }
    else
    {
        num=a[4]-48;
        printf("%s",tens[num]);
        num=a[5]-48;
        printf("%s",once[num]);
        printf(" Thousand");
    }

    if (a[6]-48==0)
    {
        /* code */
    }
    else
    {
        num=a[6]-48;
        printf("%s",once[num]);
        printf(" Hundred");
    }

    if (a[7]-48==1)
    {
        num=(a[7]-48)+(a[8]-48);
        printf("%s",double_digit[num]);
    }
    else
    {
        num=a[7]-48;
        printf("%s",tens[num]);
        num=a[8]-48;
        printf("%s",once[num]);
    } 
}

if (len>9)
{
    printf("\t\t_________________________________________________");
    printf("\n");
    printf("\n\t\t                   Error 404!!!\n");
    printf("\n");
    printf("        \t      This program is made only for 9 digits. \n");
    printf("        \t      !!!Please enter the digits upto 9.      \n");
    printf("\n");
    printf("\t\t_________________________________________________");
    printf("\n");
    printf("\n");
}

return 0;
}