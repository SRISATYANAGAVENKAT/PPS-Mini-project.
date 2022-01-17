#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int list();
void deposit();
void withdraw();
void transferamount();
void checkdetails();
void end();
int ch,totalamount=1000,depoamo,withamo,transamo,totaldepo=0,totalwith=0,totaltrans=0;
int acc;
char a[50];
int main()
{
 printf("\nEnter your name: ");
 gets(a);
 printf("\nEnter your account number: ");
 scanf("%d",&acc);
 while(1)
 {
   system("cls");
   switch(list())
   {
     case 1:
        deposit();
        totaldepo+=depoamo;
        break;
     case 2:
        withdraw();
        if (withamo<=totalamount)
            totalwith+=withamo;
        break;
     case 3:
        transferamount();
        if (transamo<=totalamount);
            totaltrans+=transamo;
        break;
     case 4:
        checkdetails();
        break;
     case 5:
        system("CLS");
        end();
        getch();
        exit(0);
     default:
        system("CLS");
        printf("\n***Invalid Choice***");
        printf("\nPress any key twice to choose again..");
        getch();
        break;
    }//end of switch
  getch();
 }//end of while
}

int list()
{
  printf("\n1. Deposit Amount");
  printf("\n2. Withdraw Amount");
  printf("\n3. Transfer Amount");
  printf("\n4. Check details");
  printf("\n5. Exit");
  printf("\nEnter your choice <e.g- 1 to Deposit Amount>: ");
  scanf("%d", &ch); 
  return(ch);
}

void deposit()
{
    printf("\nEnter the amount you want to Deposit: ");
    scanf("%d",&depoamo);  
    totalamount+=depoamo;
}
void withdraw()
{
    printf("\nEnter the amount you want to Withdraw: ");
    scanf("%d",&withamo);
      if (withamo<=totalamount)
        totalamount-=withamo;
      else
        printf("\n***Insufficient Balance***");
}
void transferamount()
{
    printf("\nEnter the amount you want to Transfer: ");
    scanf("%d",&transamo);   
      if (transamo<=totalamount)
        totalamount-=transamo;
      else
        printf("\n***Insufficient Balance***");
}
void checkdetails()
{
    printf("\nTotal Amount=%d",totalamount); 
    printf("\nTotal Deposited Amount=%d",totaldepo); 
    printf("\nTotal Withdrawn Amount=%d",totalwith); 
    printf("\nTotal Transfered Amount=%d",totaltrans); 
}
void end()
{
    printf("\n*************\n");
    printf("\nYour Name=%s",a);
    printf("\nAccount Number=%d",acc);
    printf("\nTotal Amount=%d",totalamount); 
    printf("\nTotal Deposited Amount=%d",totaldepo);
    printf("\nTotal Withdrawn Amount=%d",totalwith); 
    printf("\nTotal Transfered Amount=%d",totaltrans); 
    printf("\n*****Thanks*****"); 
}