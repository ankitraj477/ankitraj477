#include <stdio.h>
#include <windows.h>
int main(int argc, char const *argv[])
{
    int h,m,s;

    int d= 1000; // we add a delay of 1000 millisecond and we will use it in the function sleep

    printf("SET CURRENT TIME:\n");

    scanf("%d%d%d",&h,&m,&s);

    if (h>24 || m>60 ||s>60)
    {
        printf("ERROR !\n");
        exit(0);
    }

    while (1) // this is an infinite loop nd anything inside will repeat forever
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if (m>24)
        {
            h=1;
        }

        printf("\n TIME:");
        printf(" %02d:%02d:%02d",h,m,s); // this writes our time in format = 00:00:00
         Sleep(d); // this function slows down the while loop and make it run every 1 sec
        
        system("cls");// this clears the screen
    }
    
    
    return 0;
}
