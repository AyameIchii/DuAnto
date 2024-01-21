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
       //dumama
        printf ("\n Root privileges given to the user \n");
    }
// dam hai cay
    return 0;
    //lon luc
}

