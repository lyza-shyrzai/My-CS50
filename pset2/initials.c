#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
string user_stuff = GetString();
int j = 10;
char initials[j];
_Bool has_first = 0;

if (user_stuff !=NULL)
    {
    for (int i=0,n = strlen(user_stuff); i < n; i++)
        {
        if (user_stuff[i] != 32)
            {
            if (has_first ==0)
                {
                    initials[i] = user_stuff[i];
                    j++
                    has_first = 1;
                }
            }
            else
            {
                has_first = 0;
            }
        }
    }
    
    for (int i = 0; i <j; i++)
    {
        printf("%c", toupper(initials[i]));
    }
    printf("\n")
}