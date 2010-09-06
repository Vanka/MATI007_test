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

        namebuffer[0]='\0';
        surnamebuffer[0]='\0';
        nicknamebuffer[0]='\0';

        printf("How do you want to introduce yourself?:\n");
        printf("a)By name\n");
        printf("b)By surname\n");
        printf("c)By nickname\n");
        printf("d)I'm not shy!!!\n");
        printf("e)Tut bil Gero\n");
        printf("f)Choose me to see something cool =)\n");
        printf("j)Tut bil Gero opiat\n");
        printf("h)Sandwich makes me so strong!\n");
        printf("i)Aga vot eti reb9ta \n");
        printf("j)O________________o... \n");
        do{
            c=getchar();
            getchar();
        }while(c<'a'||c>'j');

        printf("Remember:you can't enter more then %d symbols per field!\n-------------------\n", LINELENGTH-1);

        switch(c){
            case 'a':
                printf("Enter your name:");
                fgets(namebuffer, LINELENGTH, stdin);
                namebuffer[strlen(namebuffer)-1]='\0';
                break;
            case 'b':
                printf("Enter your surname:");
                fgets(surnamebuffer, LINELENGTH, stdin);
                surnamebuffer[strlen(surnamebuffer)-1]='\0';
                break;
            case 'c':
                printf("Enter your nickname:");
                fgets(nicknamebuffer, LINELENGTH, stdin);
                nicknamebuffer[strlen(nicknamebuffer)-1]='\0';
                break;
            case 'd':

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
            case 'e':
                printf("This means, that Gero now understands Git!!!\n");
                break;
            case 'f':
                printf("You've got FROWNED!!!\n");
                getch();
                printf("No, seriously, You've got FROWNED!1!!!1!!!1111\n");
                break;
            case 'h':
                printf("To tell the truth, cake makes me much stronger...");
                getch();
                printf("but cake is a lie!\n");
                break;

            case 'i':
                printf("Какие нах ребята?!\n");
                break;

            case 'j':
                printf("I'm very sad!\n");
                printf("I'm very very sad!\n");
                printf("I'm very very very sad!\n");
                printf("I'm very very vey very sad!\n");
                printf("I'm very very vey very sad!-_- +1\n ");
                break;

        }

        printf("-------------------\n");
        //printf("name=%s\nsurname=%s\nnickname=%s\n\n", namebuffer, surnamebuffer, nicknamebuffer[LINELENGTH]);

        //printf("name=%d\nsurname=%d\nnickname=%d\n", strlen(namebuffer), strlen(surnamebuffer), strlen(nicknamebuffer));
/*
        namebuffer[strlen(namebuffer)-1]='\0';
        surnamebuffer[strlen(surnamebuffer)-1]='\0';
        nicknamebuffer[strlen(nicknamebuffer)-1]='\0';
  */


        if(strcmp(nicknamebuffer, "TReaper")==0){
            printf("Welcome, Master TReaper!\n");
        }else if(c=='a'){
            printf("So, you've entered only your name... You are %s, right?\n", namebuffer);
        }else if(c=='b'){
            printf("So, your surname is %s\n", surnamebuffer);
        }else if(c=='c'){
            printf("So, you've entered only your nickname, which is %s\n", nicknamebuffer);
        }else if(c=='d'){
            printf("Oh, %s is not a shy person - now we know that %s's surname is %s and %s's nickname is %s! Thank you very much!!!\n", namebuffer, namebuffer, surnamebuffer, namebuffer, nicknamebuffer);
        }

        printf("\n\nEnter @ to exit or something else to try again lol\n");
        c=getch();
    }
    return 0;
}
