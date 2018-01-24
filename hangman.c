#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count=0;
char as[100];
char es[100];
int main()
{
    char s[100],*ch=NULL;
    printf("\n__________\n");
    printf("|    |\n") ;
    printf("|    |\n") ;
    printf("|    h\n") ;
    printf("|   man \n") ;
    printf("|    n  \n") ;
    printf("|    g \n") ;
    printf("|\n") ;
    printf("|__________\n\n");
    printf("\nenter the word to be guessed to start the game :) \n\n");
    scanf("%s",&s);
    system("cls");
    int i,c=0,l;
    l=strlen(s);
    es[l]='\0';
    printf("\n__________\n");
    printf("|    |\n") ;
    printf("|    |\n") ;
    printf("|    \n") ;
    printf("|     \n") ;
    printf("|  \n") ;
    printf("|\n") ;
    printf("|\n") ;
    printf("|__________\n");
    printf("\n");

    for(i=0; i<l; i++)
    {
        as[i]='_';
    }
    as[l]='\0';
    printf("\nenter the character.all the best :) \n \n");
    for(i=0; i<l; i++)
        {

            printf("%c",as[i]);
            printf(" ");

        }
     printf("\n\nyou have 6 chances");
    while(c!=1)
    {
        scanf("%s",&ch);
        processch(s,l,ch);
        clearboard();
        drawman(l);
        c=check(s,l);
    }
    return 0;
}
void processch(char *s,int l,char ch)
{
    int i=0,g=0;
    for(i=0; i<l; i++)
    {
        if(s[i]==ch)
        {
            as[i]=s[i];
            g=1;
        }
    }
    if(g!=1)
    {
        es[count]=ch;
        count++;
        printf("\nelement not found\n");
    }
    printf("\n");
    for(i=0; i<l; i++)
    {

        printf("%c",as[i]);
        printf(" ");

    }

}
void clearboard()
{
    system("cls");
}
void drawman(int l)
{
    int i;
    if(count==0)
    {
        printf("\n__________\n");
        printf("|    |\n") ;
        printf("|    |\n") ;
        printf("|   \n") ;
        printf("|   \n") ;
        printf("|    \n") ;
        printf("|\n") ;
        printf("|\n") ;
        printf("|__________\n");
        printf("\n");
        printf("\nenter the character\n\n ");
        for(i=0; i<l; i++)
        {
            printf("%c",as[i]);
            printf(" ");

        }

    }
    if(count==1)
    {
        printf("\n__________\n");
        printf("|    |\n") ;
        printf("|    |\n") ;
        printf("|    0\n") ;
        printf("|     \n") ;
        printf("|  \n") ;
        printf("|\n") ;
        printf("|\n") ;
        printf("|__________\n");
        printf("\n");
         printf("\nenter the character\n\n ");
        for(i=0; i<l; i++)
        {

            printf("%c",as[i]);
            printf(" ");

        }
        printf("\n\n");
        printf("eliminated characters are : ") ;
        for(i=0;i<count;i++){
            printf("%c",es[i]);
            printf("  ");
        }

    }
    if(count==2)
    {
        printf("\n__________\n");
        printf("|    |\n") ;
        printf("|    |\n") ;
        printf("|    0\n") ;
        printf("|    |  \n") ;
        printf("|    \n") ;
        printf("|\n") ;
        printf("|\n") ;
        printf("|__________\n");
        printf("\n");
         printf("\nenter the character\n\n ");
        for(i=0; i<l; i++)
        {

            printf("%c",as[i]);
            printf(" ");
        }
        printf("\n\n");
        printf("eliminated characters are : ") ;
        for(i=0;i<count;i++){
            printf("%c",es[i]);
            printf("  ");
        }

    }
    if(count==3)
    {
        printf("\n__________\n");
        printf("|    |\n") ;
        printf("|    |\n") ;
        printf("|    0\n") ;
        printf("|   /|  \n") ;
        printf("|    \n") ;
        printf("|\n") ;
        printf("|\n") ;
        printf("|__________\n");
        printf("\n");
         printf("\nenter the character\n\n ");
        for(i=0; i<l; i++)
        {

            printf("%c",as[i]);
            printf(" ");
        }
        printf("\n\n");
        printf("eliminated characters are : ")  ;
        for(i=0;i<count;i++){
            printf("%c",es[i]);
            printf("  ");
        }

    }
    if(count==4){
        printf("\n__________\n");
        printf("|    |\n") ;
        printf("|    |\n") ;
        printf("|    0\n") ;
        printf("|   /|\\\  \n") ;
        printf("|    \n") ;
        printf("|\n") ;
        printf("|\n") ;
        printf("|__________\n");
        printf("\n");
         printf("\nenter the character\n\n ");
        for(i=0; i<l; i++)
        {

            printf("%c",as[i]);
            printf(" ");
        }
        printf("\n\n");
        printf("eliminated characters are : ")  ;
        for(i=0;i<count;i++){
            printf("%c",es[i]);
            printf("  ");
    }
    }
    if(count==5){
        printf("\n__________\n");
        printf("|    |\n") ;
        printf("|    |\n") ;
        printf("|    0\n") ;
        printf("|   /|\\\  \n") ;
        printf("|   / \n") ;
        printf("|\n") ;
        printf("|\n") ;
        printf("|__________\n");
        printf("\n");
         printf("\nenter the character\n\n ");
        for(i=0; i<l; i++)
        {

            printf("%c",as[i]);
            printf(" ");
        }
        printf("\n\n");
        printf("eliminated characters are : ")  ;
        for(i=0;i<count;i++){
            printf("%c",es[i]);
            printf("  ");
    }
    }
    if(count==6)
    {
        printf("__________\n");
        printf("|    |\n") ;
        printf("|    |\n") ;
        printf("|    0\n") ;
        printf("|   /|\\\  \n") ;
        printf("|   / \\\ \n") ;
        printf("|\n") ;
        printf("|\n") ;
        printf("|__________\n");
        printf("\n\n");

        for(i=0; i<l; i++)
        {

            printf("%c",as[i]);
            printf(" ");
        }
        printf("\n\n");
        printf("eliminated characters are : ");
        for(i=0;i<count;i++){
            printf("%c",es[i]);
            printf("  ");
        }


    }
    }
int check(char *s,int l)
{
    int i,g=0;
    if(count>=6)
    {
        printf("\n\n----sorry you have been hanged.better luck next time----\n");
        printf("\nThe answer was : ") ;
        printf("%s\n",s);
        exit(0);
        return 1;
    }
    for(i=0; i<l; i++)
    {
        if(s[i]==as[i])
            g++;
    }
    if(g==l&&count<6)
    {
        printf("\n\n********congratulations saved yourself in %d chances********\n",count)  ;
        return 1;
    }
    else
    {
        if(count==5)
            printf("\n\nyou still have a %d chance",6-count);
        else
            printf("\n\nyou still have  %d chances",6-count);
        return 0;
    }

}
