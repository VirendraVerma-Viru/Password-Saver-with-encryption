
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

void dataLibrary();
main()
{

    //first file
    FILE *fp;
    char data[10000];int i;int l;
    char licencepin[100];
    int pinlength;
    char pin[4]={'7','4','9','2'};
    int flagpin=0;
//@9452@$
//@9452$@
//test
//@9452$@
    //write
    FILE *wfp;
    char wdata[10000];

//read
    fp = fopen( "test.txt", "r" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file test.c\n" ) ;
                 return 1;
         }
         fread(data,10000,1,fp);
        //fgets ( data,10000, fp );
        fclose(fp);
        l=strlen(data);
        for(i=0;i<10;i++)
        {
            data[l]=' ';
            l++;
        }
//enscription


        for(i=0;i<l;i++)
         {
            switch(data[i])
            {
                case 'a':data[i]='1';break;
                case '1':data[i]='a';break;

                case 'b':data[i]='^';break;
                case '^':data[i]='b';break;

                case 'c':data[i]='&';break;
                case '&':data[i]='c';break;

                case 'd':data[i]='!';break;
                case '!':data[i]='d';break;

                case 'e':data[i]='@';break;
                case '@':data[i]='e';break;

                case 'f':data[i]='#';break;
                case '#':data[i]='f';break;

                case 'g':data[i]='$';break;
                case '$':data[i]='g';break;

                case 'h':data[i]='%';break;
                case '%':data[i]='h';break;

                case 'i':data[i]='*';break;
                case '*':data[i]='i';break;

                case 'j':data[i]='(';break;
                case '(':data[i]='j';break;

                case 'k':data[i]=')';break;
                case ')':data[i]='k';break;

                case 'l':data[i]='5';break;
                case '5':data[i]='l';break;

                case 'm':data[i]='9';break;
                case '9':data[i]='m';break;

                case 'n':data[i]='7';break;
                case '7':data[i]='n';break;

                case 'o':data[i]='3';break;
                case '3':data[i]='o';break;

                case 'p':data[i]='{';break;
                case '{':data[i]='p';break;

                case 'q':data[i]='}';break;
                case '}':data[i]='q';break;

                case 'r':data[i]='[';break;
                case '[':data[i]='r';break;

                case 's':data[i]='4';break;
                case '4':data[i]='s';break;

                case 't':data[i]='8';break;
                case '8':data[i]='t';break;

                case 'u':data[i]='6';break;
                case '6':data[i]='u';break;

                case 'v':data[i]='/';break;
                case '/':data[i]='v';break;

                case 'w':data[i]='0';break;
                case '0':data[i]='w';break;

                case 'x':data[i]=',';break;
                case ',':data[i]='x';break;

                case 'y':data[i]='.';break;
                case '.':data[i]='y';break;

                case 'z':data[i]=':';break;
                case ':':data[i]='z';break;

                case ' ':data[i]='`';break;
                case '`':data[i]=' ';break;

                default :printf("umknown");
            }
            printf("###%c###",data[i]);
         }



//write
        //remove(testa.dat);
         wfp = fopen( "testw.res", "w+" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file test.c\n" ) ;
                 return 1;
         }
         fwrite(data,l,1,wfp);

        fclose(wfp);
        dataLibrary();
}

void dataLibrary()
{
    system ("start testdeltxt.bat");
}
