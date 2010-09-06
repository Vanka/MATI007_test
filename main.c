#include <stdio.h>
#include <stdlib.h>

#define LINELENGTH 33


int main()
{
    char namebuffer[LINELENGTH];
    char surnamebuffer[LINELENGTH];
    char nicknamebuffer[LINELENGTH];

    int c;

    while(c!='@'){

        printf("How do you want to introduce yourself?:\n");
        printf("1)By name\n");
        printf("2)By surname\n");
        printf("3)By nickname\n");
        printf("4)I'm not shy!!!\n");
        printf("5)Tut bil Gero\n");
        printf("6)Choose me to see something cool =)\n");
        printf("7)Tut bil Gero opiat\n");
        printf("8)Sandwich makes me so strong!\n");
        printf("9)Aga vot eti reb9ta \n");
        printf("10)O________________o... \n");
        do{
            c=getchar();
        }while(c<'1'||c>'8');

        printf("Remember:you can't enter more then %d symbols per field!\n-------------------\n", LINELENGTH-1);

        switch(c){
            case '1':
                printf("Enter your name:");
                fgets(namebuffer, LINELENGTH, stdin);
                namebuffer[strlen(namebuffer)-1]='\0';
                break;
            case '2':
                printf("Enter your surname:");
                fgets(surnamebuffer, LINELENGTH, stdin);
                surnamebuffer[strlen(surnamebuffer)-1]='\0';
                break;
            case '3':
                printf("Enter your nickname:");
                fgets(nicknamebuffer, LINELENGTH, stdin);
                nicknamebuffer[strlen(nicknamebuffer)-1]='\0';
                break;
            case '4':

                printf("Enter your name:");
                fgets(namebuffer, LINELENGTH, stdin);
                namebuffer[strlen(namebuffer)-1]='\0';

                printf("Enter your surname:");
                fgets(surnamebuffer, LINELENGTH, stdin);
                surnamebuffer[strlen(surnamebuffer)-1]='\0';

                printf("Enter your nickname:");
                fgets(nicknamebuffer, LINELENGTH, stdin);
                nicknamebuffer[strlen(nicknamebuffer)-1]='\0';

                break;
            case '5':
                printf("This means, that Gero now understands Git!!!\n");
                break;
            case '6':
                printf("You've got FROWNED!!!\n");
                getch();
                printf("No, seriously, You've got FROWNED!1!!!1!!!1111\n");
                break;
            case '8':
                printf("To tell the truth, cake makes me much more strong...");
                getch();
                printf("but cake is a lie!\n");
                break;
            case '10':
                printf("I'm very sad!\n");
                printf("I'm very very sad!\n");
                printf("I'm very very very sad!\n");
                printf("I'm very very vey very sad!\n");
                printf("I'm very very vey very sad!-_- +1\n ");
                break;


        }

        printf("-------------------\n");

        //printf("name=%d\nsurname=%d\nnickname=%d\n", strlen(namebuffer), strlen(surnamebuffer), strlen(nicknamebuffer));
/*
        namebuffer[strlen(namebuffer)-1]='\0';
        surnamebuffer[strlen(surnamebuffer)-1]='\0';
        nicknamebuffer[strlen(nicknamebuffer)-1]='\0';
  */


        if(strcmp(nicknamebuffer, "TReaper")==0){
            printf("Welcome, Master TReaper!\n");
        }else if(c=='1'){
            printf("So, you've entered only your name... You are %s, right?\n", namebuffer);
        }else if(c=='2'){
            printf("So, your surname is %s\n", surnamebuffer);
        }else if(c=='3'){
            printf("So, you've entered only your nickname, which is %s\n", nicknamebuffer);
        }else if(c=='4'){
            printf("Oh, %s is not a shy person - now we know that %s's surname is %s and %s's nickname is %s! Thank you very much!!!\n", namebuffer, namebuffer, surnamebuffer, namebuffer, nicknamebuffer);
        }

        printf("\n\nEnter @ to exit or something else to try again lol\n");
        c=getch();
    }
    return 0;
}
