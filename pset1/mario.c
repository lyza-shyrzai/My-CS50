#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int l;
    do 
    {
    	printf("height: ");
    	l = GetInt();
    	if (l == 0)
    	exit (0);
    }    
    while(!((l >= 1) && (l < 24)));
    
    int k = l;
    
    for(int f = 0; f < l; f++)
    {
        for(int i = 1; i < k; i++)
            printf(" ");
        for(int j = 0; j < l-k+2; j++)
            printf("#");
        printf("\n");
        k--;
    }
}