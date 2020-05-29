

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

void dataLibrary();
void ShowFile();
void clrscr(void);
void gotoxy(int x,int y);
int main()
{
    ShowFile();
    //first file

    FILE *fp;
    char data[10000];int i;int l;
    char licencepin[100];
    int pinlength;
    char pin[4]={'7','4','9','2'};
    int flagpin=0;

    //write
    FILE *wfp;
    char wdata[10000];

    for(i=0;i<10000;i++)
    {
        printf(" ");
    }
//read
    fp = fopen( "testw.res", "r+" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file test.c\n" ) ;
                 return 1;
         }
         fread(data,10000,1,fp);
         fclose(fp);
        //fgets ( data,10000, fp );
        l=strlen(data);
        clrscr();
        gotoxy(1,1);
printf("Enter Pin\n");
//getting pin from user
  gets(licencepin);
         pinlength=strlen(licencepin);

         if(pinlength>4)
         {
             printf("Incorrect pin");
              flagpin=1;
         }

         else
         {

             for(i=0;i<pinlength;i++)
             {
                 if(pin[i]==licencepin[i])
                 {
                     flagpin=0;
                 }
                 else
                 {
                     flagpin=1;
                 }
             }
         }

        if(!flagpin)
        {
             printf("Discription Start");
//discription
            for(i=0;i<l;i++)
             {
                switch(data[i])
                {
                    case '1':data[i]='a';break;
                    case 'a':data[i]='1';break;

                    case '^':data[i]='b';break;
                    case 'b':data[i]='^';break;

                    case '&':data[i]='c';break;
                    case 'c':data[i]='&';break;

                    case '!':data[i]='d';break;
                    case 'd':data[i]='!';break;

                    case '@':data[i]='e';break;
                    case 'e':data[i]='@';break;

                    case '#':data[i]='f';break;
                    case 'f':data[i]='#';break;

                    case '$':data[i]='g';break;
                    case 'g':data[i]='$';break;

                    case '%':data[i]='h';break;
                    case 'h':data[i]='%';break;

                    case '*':data[i]='i';break;
                    case 'i':data[i]='*';break;

                    case '(':data[i]='j';break;
                    case 'j':data[i]='(';break;

                    case ')':data[i]='k';break;
                    case 'k':data[i]=')';break;

                    case '5':data[i]='l';break;
                    case 'l':data[i]='5';break;

                    case '9':data[i]='m';break;
                    case 'm':data[i]='9';break;

                    case '7':data[i]='n';break;
                    case 'n':data[i]='7';break;

                    case '3':data[i]='o';break;
                    case 'o':data[i]='3';break;

                    case '{':data[i]='p';break;
                    case 'p':data[i]='{';break;

                    case '}':data[i]='q';break;
                    case 'q':data[i]='}';break;

                    case '[':data[i]='r';break;
                    case 'r':data[i]='[';break;

                    case '4':data[i]='s';break;
                    case 's':data[i]='4';break;

                    case '8':data[i]='t';break;
                    case 't':data[i]='8';break;

                    case '6':data[i]='u';break;
                    case 'u':data[i]='6';break;

                    case '/':data[i]='v';break;
                    case 'v':data[i]='/';break;

                    case '0':data[i]='w';break;
                    case 'w':data[i]='0';break;

                    case ',':data[i]='x';break;
                    case 'x':data[i]=',';break;

                    case '.':data[i]='y';break;
                    case 'y':data[i]='.';break;

                    case ':':data[i]='z';break;
                    case 'z':data[i]=':';break;

                    case '`':data[i]=' ';break;
                    case ' ':data[i]='`';break;


                    default :printf("umknown");
                }
                printf("###%c###",data[i]);
             }
//write
        //remove(testa.dat);
         wfp = fopen( "test.txt", "w+" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file test.c\n" ) ;
                 return 1;
         }
         fwrite(data,l,1,wfp);
         fclose(wfp);
            dataLibrary();

        }
        else
        printf("IncorrectPin");



    return 0;

}
void clrscr()
{
    system("cls");
}
void gotoxy(int b,int v)
{
    COORD c;
    c.X=b;
    c.Y=v;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void ShowFile()
{
    system ("start show.bat");
}

void dataLibrary()
{
    system ("start testwdelres.bat");
}

