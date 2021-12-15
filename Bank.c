//This is Group 8 Welcome to our Nmims Bank!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//#include <stdbool.h>
#include <ctype.h>
#include <windows.h>
//FUNCTIONS
int menu();
void depo();
void with();
void transfer();
void detchec();
void help();
void newuser();
void id();
//void checknumber();
void si();
void search();
void delete_tran();
void display(int s);

//GLOBAL VARIABLES
int amt;
int tamt=10000,tdepo=0,ttran=0,twith=0;
int tr;
char n[30];
int acco;
char email[70];
//int k;
char y[12];
int v;
char x[10];
char add[50];
int z;


typedef struct Account
{
    char name[30];
    long long int phone;
    long long int aadhar;
    char address[50];
    char email[70];
    int acc_no;


    int total_amt;
    int depo_count, with_count, tran_count;

    int depo_amt, with_amt, tran_amt;


}account;
account database[50];
int c, count = 0;

void info()
{
    account a;
    strcpy(a.name, "Atishay Gwari");
    a.aadhar = 123467894567;
    a.phone = 8980322052;
    strcpy(a.email, "atishay345@gmail.com");
    a.total_amt = tamt;
    a.depo_amt=0; a.with_amt=0; a.tran_amt=0;
    a.depo_count=0; a.with_count=0; a.tran_count=0;
    a.acc_no = 24689;
    strcpy(a.address, "Flat-1103,T-3,Regency Towers");
    database[count] = a;
    count++;



    account k;
    strcpy(k.name, "Prabh Simar Jeet");
    k.aadhar = 765432190215;
    k.phone = 8980398345;
    strcpy(k.email, "prabhsimarjeet@gmail.com");
    k.total_amt = tamt;
    k.depo_amt=0; k.with_amt=0; k.tran_amt=0;
    k.depo_count=0; k.with_count=0; k.tran_count=0;
    k.acc_no = 34592;
    strcpy(k.address, "T-4,Tropical Lagoon");
    database[count] = k;
    count++;



    account o;
    strcpy(o.name, "Dhruv Sahini");
    o.aadhar = 892376324289;
    o.phone = 9934599651;
    strcpy(o.email, "dhruvsahini@gmail.com");
    o.total_amt = tamt;
    o.depo_amt=0; o.with_amt=0; o.tran_amt=0;
    o.depo_count=0; o.with_count=0; o.tran_count=0;
    o.acc_no = 98543;
    strcpy(o.address, "Flat-301,Tower-G,Safal Parivesh");
    database[count] = o;
    count++;

    account z;
    strcpy(z.name, "Aarohi Mahske");
    z.aadhar = 897654324567;
    z.phone = 9903299904;
    strcpy(z.email, "aarohimahske@gmail.com");
    z.total_amt = tamt;
    z.depo_amt=0; z.with_amt=0; z.tran_amt=0;
    z.depo_count=0; z.with_count=0;z.tran_count=0;
    z.acc_no = 66481;
    strcpy(z.address, "Tower 4,Unati Woods");
    database[count] = z;
    count++;

    account j;
    strcpy(j.name, "Aditya Shirsat");
    j.aadhar = 8901345287623;
    j.phone = 3458762344;
    strcpy(j.email, "shirsataditya@gmail.com");
    j.total_amt = tamt;
    j.depo_amt=0;j.with_amt=0;j.tran_amt=0;
    j.depo_count=0; j.with_count=0;j.tran_count=0;
    j.acc_no = 33815;
    strcpy(j.address, "Greenwich,T-1,104,Hiranandani Estate ");
    database[count] = j;
    count++;

    account t;
    strcpy(t.name, "Anisha Singhania");
    t.aadhar = 789231274566;
    t.phone = 8092452176;
    strcpy(t.email, "anishasinghaia1234@gmail.com");
    t.total_amt = tamt;
    t.depo_amt=0; t.with_amt=0; t.tran_amt=0;
    t.depo_count=0; t.with_count=0;t.tran_count=0;
    t.acc_no = 99231;
    strcpy(t.address, "Avon,1504,Opp Hiranandani School Thane(w)");
    database[count] = t;
    count++;

    account b;
    strcpy(b.name, "Tejas Goel");
    b.aadhar = 982465217652;
    b.phone = 7023498543;
    strcpy(b.email, "tejassgoel78@gmail.com");
    b.total_amt = tamt;
    b.depo_amt=0; b.with_amt=0;b.tran_amt=0;
    b.depo_count=0;b.with_count=0;b.tran_count=0;
    b.acc_no = 45823;
    strcpy(b.address, "Tower 4,Unati Woods");
    database[count] = b;
    count++;

    account q;
    strcpy(q.name, "Anjuli Sharma");
    q.aadhar = 765234568921;
    q.phone = 8980399956;
    strcpy(q.email, "anjulisharmas@gmail.com");
    q.total_amt = tamt;
    q.depo_amt=0; q.with_amt=0;q.tran_amt=0;
    q.depo_count=0;q.with_count=0;q.tran_count=0;
    q.acc_no = 89234;
    strcpy(q.address, "Tower 4,Unati Woods");
    database[count] = q;
    count++;
    //printf("%s", database[0].name);
    //printf("%d", database[0].acc_no);



}

int calls = 1;

void main()
{
    info();


   //char line[256];
   //FILE *fpointer = fopen("read.txt", "r");
   /*for(int n=1; n<=7; n++)
   {
      fgets(line, 256, fpointer);
      printf("%s", line);
   }
   fclose(fpointer);*/
    newuser();


}
int menu()
{

    system("cls");

    int ch;
    system("COLOR 0E");
    printf("\n 1.Deposit\n");
    printf("\n 2.Withdraw\n");
    printf("\n 3.Transfer money\n");
    printf("\n 4.Check balance\n");
    printf("\n 5.Apply for credit or debit card\n");
    printf("\n 6.Search\n");
    printf("\n 7.Delete Transaction History\n");
    printf("\n 8.Logout\n");
    printf("\n 9.FAQ\n");
    printf("\n Enter your choice: ");
    scanf("%d",&ch);

    while(1)
    {
        system("cls");
        //newuser();

    switch(ch)
    {
        case 1:
        {
            depo();

            break;
        }
        case 2:
        {
            with();
            if(amt<=tamt)

            break;
        }
        case 3:
        {
            transfer();
            if(tr<=tamt)

            break;
        }
        case 4:
        {
            detchec();
            break;
        }
        case 5:
        {
            id();
            break;
        }
        case 6:
        {
            search();
            //newuser();
            break;
        }
        case 7:
        {
            delete_tran();
            //help();
            break;

        }
        case 8:
        {
            newuser();
            break;
        }
        case 9:
        {
            help();
            break;
        }

        default:
            {
                printf("\nInvalid output!\n");
                menu();
            }
    }
    getch();

    }

    return 0;
}
void depo()
{
     system("COLOR 0E");
     printf("\nEnter the amount that you want to deposit: ");
     scanf("%d",&amt);
     database[c].total_amt+=amt;
     database[c].depo_amt+=amt;
     database[c].depo_count++;
     printf("\n1.Saving account \n ");
     printf("\n2.Fixed account  \n ");
     printf("\n3.Current account \n ");
     printf("\nEnter your choice:\n");
     scanf("%d",&v);
     switch(v)
     {
       case 1:
         {
             printf("\nAccount information updated.\n ");
             si();
             break;
         }
      case 2:
        {
            printf("\nAccount information updated.\n");
            si();
            printf("\nRemoval of the principle amount will lead to loss of interest earned.\n");
            break;
         }
      case 3:
          {
              printf("\nAccount information updated.\n");
              break;
          }
      default:
        {
            printf("\nTry Again.Error:404\n ");
        }
    }
    getch();
    menu();
}

void with()
{
    system("COLOR 0E");
     printf("\n Enter the amount you want to withdraw:");
     scanf("%d",&amt);
     if(amt>database[c].total_amt)
     {
          printf("\nTransaction failed:You are poor!");
          getch();
          with();
     }
     else
     {
         database[c].total_amt-=amt;
         database[c].with_amt+=amt;
         database[c].with_count++;
         printf("\nTransfer Successful.\n");
         getch();
         menu();
     }
}
void transfer()
{
    int acco1, d = -1;
    system("COLOR 0E");
    printf("\nEnter receiver's account number: ");
     scanf("%d",&acco1);
     printf("\nEnter the amount that you want to transfer: ");
     scanf("%d",&tr);
     for(int i = 0; i < count; i++)
     {
         if(database[i].acc_no == acco1)
         {
             d=i;
             break;
         }
     }
     if(tr<=database[c].total_amt && d != -1)
     {
         //int c1 = i;
         database[c].total_amt-=tr;
         database[d].total_amt+=tr;
         printf("\nTransfer Successful.\n");
         //database[c1].total_amt+=tr;
         database[c].tran_amt+=tr; database[d].tran_amt+=tr;
         database[c].tran_count++; database[d].tran_count++;
         getch();
         menu();
     }
     else if(tr>database[c].total_amt)
     {
         printf("\nInsufficient Funds.\n");
          getch();
          menu();
     }
     else
     {
          printf("\nTransfer Successful.\n");
          getch();
          menu();
     }


}
void detchec()
{

    system("COLOR 0E");

     printf("\n*********************************************************\n");
     printf("\n Total amount            :%d \n",database[c].total_amt);
     printf("\n Total amount deposited  :%d \n",database[c].depo_amt);
     printf("\n Total amount withdrawn  :%d \n",database[c].with_amt);
     printf("\n Total amount transfered :%d \n",database[c].tran_amt);
     printf("\n*********************************************************\n");

     getch();
     menu();

}
void help()
{
    int kl;
    system("COLOR 0E");
    printf("\n 1.Is any of my personal information stored in the Online Banking product?\n");
    printf("\n 2.When can I use Online Banking services?\n");
    printf("\n 3.What happens if I forget or lose my account number?\n");
    printf("\nEnter your choice:\n");
    scanf("%d",&kl);
    switch(kl)
    {
        case 1:
           printf("\nYes, the Online Banking product stores your User ID, password and user preferences.\n");
           break;
        case 2:
            printf("\nWith Online Banking, you have access to your account information 24 hours a day, 7 days a week!\n");
            break;
        case 3:
            printf("\nJust call us and we will take you through the steps needed to get back into the system immediately!\n");
            break;
        default:
            printf("\nInvalid output.\n");

    }
   printf("\n********************************************************************\n");
   printf("\nFor further information on any loans or technical difficulties.\n");
   printf("\nYou can contact for assistance on: 9099990999 \n");
   printf("\n********************************************************************\n");
   getch();
   menu();
}
void newuser()
{

    system("COLOR 0E");
    int k, a = -1;
    printf("\n                                                  Welcome to NMIMS bank!              \n ");
    printf("\n                                                  1.Login into an existing account     \n");
    printf("\n                                                  2.Create a new account                \n");
    printf("\n                                                  Enter your choice:");
    scanf("%d",&k);
     switch(k)
     {
     case 1:
        {
        printf("\nEnter your full name:");
        gets(n);
        gets(n);
        printf("\nEnter your account number:");
        scanf("%d",&acco);

        for(int i = 0; i < count; i++)
        {
            if(acco == database[i].acc_no && strcmp(database[i].name, n) == 0)
            {
                a = i;
                //printf("%d\n", a);
                break;
            }

        }
        if (a < 0)
        {
            printf("Account Not Found\nTry Again");
            getch();
            system("cls");
            newuser();
        }
        c = a;
        menu();

        break;
        }

     case 2:
        {

            account acc;
            name:
            printf("\nEnter your full name:\n");
            gets(acc.name); gets(acc.name);
            //scanf(" %50[^\n]", acc.name);
            int valid = 0;
            for(int i=0; i<strlen(acc.name); i++)
            {
                if(isalpha(acc.name[i]) || isspace(acc.name[i]))
                {
                    valid++;
                }
                else
                {
                    valid=0;
                }
            }
            //printf("%d", strlen(acc.name));
            if(valid!=strlen(acc.name))
            {
                printf("\nInvalid input\n\n");
                Sleep(2000);
                goto name;
            }
            //strcpy(acc.name, n);

            phone:
            printf("\nEnter your phone no(only 10 digits):\n");
            scanf("%lld", &acc.phone);
            long long int p = acc.phone;
            int count_phone = 0;
            while(p > 0)
            {
                p = p/10;
                count_phone++;

            }
            if(count_phone != 10)
            {
                printf("Enter Valid Phone Number");
                Sleep(200);
                goto phone;
            }

            //printf("%lld", acc.phone);

            //char phone_num[20];

            //itoa(acc.phone, phone_num, 10);
            /*if(strlen(phone_num)!=10)
            {
                printf("\nEnter 10 digits!\n");
                goto phone;
            }*/
            /*for(int i=0; i<10; i++)
            {
                if(isdigit(acc.phone[i]))
                {
                    valid+=1;
                }
                /*else if(isspace(x[i]))
                {
                    valid+=0;
                }
                else
                {
                    valid+=0;
                }
            }
            if(valid!=10)
            {
                printf("\nInvalid input\n\n");
                Sleep(2000);
                //goto phone;
            }*/
            //else
              //  strcpy(acc.phone, x);

            aadhar:
            printf("\nEnter your aadhar card no(only 12 digits):\n");
            scanf("%lld", &acc.aadhar);
            long long int aa = acc.aadhar;
            int count_aa = 0;
            while(aa > 0)
            {
                aa = aa/10;
                count_aa++;
            }
            if(count_aa != 12)
            {
                printf("Enter valid aadhar number");
                Sleep(200);
                goto aadhar;
            }

            /*char aadhar_num[20];
            itoa(acc.aadhar, aadhar_num, 10);
            if(strlen(aadhar_num)!=12)
            {
                printf("\nEnter 12 digits!\n");
                goto aadhar;
            }*/
            /*for(int i=0; i<12; i++)
            {
                if(isdigit(acc.aadhar[i]))
                {
                    valid+=1;
                }
                /*else if(isspace(y[i]))
                {
                    valid+=0;
                }
                else
                {
                    valid+=0;
                }
            }
            if(valid!=12)
            {
                printf("\nInvalid input\n\n");
                Sleep(2000);
                //goto aadhar;
            }*/
            //else
              //  strcpy(acc.aadhar, y);
              //printf("%lld", acc.aadhar);
              printf("\nEnter your address:\n");
              gets(acc.address);gets(acc.address); //strcpy(acc.address, add);
              //printf("%s", acc.address);
              //printf("%lld", acc.phone);
              //printf("%d\n", count);
              c = count;
              database[c] = acc;

             count++;
             database[c].acc_no = (rand() % (90000)) + 10000;
             database[c].total_amt = tamt;
            database[c].depo_count=0; database[c].with_count=0; database[c].tran_count=0;
            database[c].depo_amt=0; database[c].with_amt=0; database[c].tran_amt=0;
            id();
            printf("Generated account number: %d", database[c].acc_no);

            //c = a;
            getch();
             //display();
             menu();

            break;
        }
        default:
            {
                printf("\n Try again  ");
                newuser();
            }
     }





}
void id()
{
    printf("\nEnter your valid email id: \n");
    scanf("%s", &email); //scanf("%s",email);
    //strcpy(database[c].email, email);
    int flag=0;
    for(int i=0;i<strlen(email);i++)
    {

        if(email[i]=='@')
        {
         flag++;
        }

    }
    if(flag==1)
    {
    strcpy(database[c].email, email);
    printf("Valid id.\n");
    printf("\n The documents can be uploaded through the link sent to your respective email id.\n");
    getch();
    menu();
    }
    else
    {
    printf("Invalid id.Try again! \n ");
    getch();
    id();
    }



    getch();


}
void si()
{
   z=(database[c].total_amt*7*1)/100;
   printf("The interest rate provided by our bank is %d \n",z);
   getch();
   menu();
}

void delete_tran()
{
    database[c].depo_count = 0;
    database[c].tran_count = 0;
    database[c].with_count = 0;

    printf("History Deleted Successfully");

    getch();
    menu();
}

void search()
{
    int ch;
    printf("\n 1. To search via name \n");
    printf("\n 2. To search via Account Number \n");
    printf("\n Enter your choice :");

    scanf("%d", &ch);

    if(ch == 1)
    {
        int index = -1;
        char ident[15];
        printf("Enter Full Name: ");
        gets(ident);
        gets(ident);
        for(int i = 0; i < count; i++)
        {
            if(strcmp(database[i].name, ident) == 0)
            {
                index = i;
                break;
            }
        }
        if(index < 0)
        {
            printf("User Not Found\n");
            getch();
            search();
        }
        display(index);

    }
    else if(ch == 2)
    {
        int index = -1;
        int account_number;
        printf("Enter Account No: ");
        scanf("%d", &account_number);
        for(int i = 0; i < count; i++)
        {
            if(account_number == database[i].acc_no)
            {
                index = i;
                break;
            }
        }
        if(index < 0)
        {
            printf("User Not Found\n");
            getch();
            menu();
        }
        display(index);


    }

}

void display(int index)
{
    //printf("%d", d);
    //for(int i = 0; i < count; i++)
    //{
        printf("Name: %s\n", database[index].name);
        printf("Account Number: %d\n", database[index].acc_no);
        printf("Email Id: %s\n", database[index].email);
        printf("Phone Number: %lld\n", database[index].phone);
        printf("Aadhar Number: %lld\n", database[index].aadhar);
        printf("Address: %s\n", database[index].address);
        printf("Transaction History:\nDeposits: %d\nWithdraw: %d\nTransfers: %d\n", database[index].depo_count, database[index].with_count, database[index].tran_count);
        printf("\n\n");
    //}
    getch();
    menu();
}


/*void checknumber()
{
 print("enter your phone number:");
 scanf("%s",&x);
 if(strlen(x)!=10)
 {
     printf("enter ur mobile no again");
 }
 else
 printf("fill the next detail");
}*/
