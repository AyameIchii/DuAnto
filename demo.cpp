#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[10];
    int pass = 0;

    printf("Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "passnhom3"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}

