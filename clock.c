#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;
    int d = 1000; /*Delay of 1000 milliseconds === 1 second*/
    printf("Set the time: \n");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)
    {

        printf("Error! \n");
        exit(0);
    }
    while (1) /*Infinity loop to start the counter till the infinity*/
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {

            h = 1;
        }
        printf("\n Clock: ");
        printf("%02d:%02d:%02d",h,m,s);
        Sleep(d);  /*sleep the program for 1 second*/
        system("cls");
    }

    return 0;
}