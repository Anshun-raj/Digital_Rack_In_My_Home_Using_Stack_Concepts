//Digital Rack in my home with digital camera that finds the total no. of books currently available in the rack and the book which is at the top in the rack

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define RACK 10

int a[RACK],top=-1,count=0;
char Book[10][10]={'Mathematics','Physics','Chemistry','Biology','History','Geography','Civics','ComputerScience','Hindi','English'};





void put();
void get();
void show();
int main()
{
    printf("There is Rack in my home in which 10 books is horizontally placed\n");
    printf("These Books are placed in the Rack with some code pasted in each book for identification purpose some details related to it are:-");
    printf("\n\nMathematics=101,Physics=103,Chemistry=105,Biology=106,History=108,Geography=109,Civics=104,ComputerScience=102,Hindi=107,English=110\n\n");


    int ch;
    printf("press 1. to put\n");
    printf("press 2. to get\n");
    printf("press 3. to show\n");
    printf("press 4. to exit\n");

    while(1)
    {
         printf("Enter your choice:");
    scanf("%d",&ch);

    switch(ch)
    {

    case 1:

    {
        put();
        break;
    }

    case 2:
    {
        get();
        break;
    }

    case 3:
    {
        show();
        break;
    }

    case 4:
        exit(0);

    default:
        printf("wrong choice");
        break;
    }
    }
    return 0;

}
void put()
{
    int data;
    if(top==RACK-1)
    {
        printf("Rack is full you can't inside more books");
    }
    else
    {
        printf("There is some space in the Rack so you can insert more books and Please enter the code between 101 to 110:");
        scanf("%d",&data);
        top++;
        a[top]=data;

    }
}
void get()
{
    if(top==-1)
    {
        printf("There is no any book in the Rack");
    }
    else
    {
        printf("Book which is at the top in the Rack is:%d->",a[top]);
        a[top]=(char) a[top];
        if(a[top]=='101')
        {
            printf("Mathematics\n");
        }
        else if(a[top]==102)
        {
            printf("ComputerScience\n");
        }
        else if(a[top]==103)
        {
            printf("Physics\n");
        }
        else if(a[top]==104)
        {
            printf("Civics\n");
        }
        else if(a[top]==105)
        {
            printf("Chemistry\n");
        }
        else if(a[top]==106)
        {
            printf("Biology\n");
        }
        else if(a[top]==107)
        {
            printf("Hindi\n");
        }
        else if(a[top]==108)
        {
            printf("History\n");
        }
        else if(a[top]==109)
        {
            printf("Geography\n");
        }
        else if(a[top]==110)
        {
            printf("English\n");
        }
        top--;
    }
}
void show()
{
    int i;

    if(top>=0)
    {
        printf("Books in the Rack are:");
        for(i=top; i>=0; i--)
        {
            count=count+1;
            printf("\n%d",a[i]);
        }
        printf("\nTotal no. of books in the Rack is:%d\n",count);
    }
    else
    {
        printf("Rack is Empty");
    }
}
