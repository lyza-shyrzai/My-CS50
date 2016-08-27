#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

char caesar(char token, int key);

int main(int argc, string argv[])
{
	// Declare variables
	bool keySuccessful = false;
	string keyword = "";
	int keylength = 0;
	string user_text = "";
	int user_input_lenght;
	int key_count = 0;
	
	
	do
	 {
	 	// If do not entered a key
	 	if (argc != 2)
	 	{
	 		printf("Incorrect or missing key.\n");
	 		return 1;
	 	}
		else if (argv[1])
		{
			int length = strlen(argv[1]);
			for (int i =0; i < length; i++)
			{
				if (!isalpha(argv[1][i]))
				// If entered the wrong key
				{
					printf("Your input contains illegal characters.\n");
					return 1;
				}
				else
				{
					keySuccessful = true;
					keyword = argv[1];
				}
			}
		}
	 } while (!keySuccessful);
	 // Declare an array of the number of key input characters
	keylength = strlen(keyword);
    int keycodes[keylength];
	 for (int i = 0; i < keylength; i++)
	 {
	  // Letters from keyword needs to be converted in the alphabetical index
	 	keycodes[i] = toupper(keyword[i]) - 65;
	 }
	 // Input text
	 user_text = GetString();
	 user_input_lenght = strlen(user_text);
	 
	 for (int i = 0; i < user_input_lenght; i++)
	 {
	 	if (!isalpha(user_text[i]))
	 	{ 
	 		// If the text is not entered
	 		printf("%c", user_text[i]);
	 	}

	 	// Input processing
	 	else
	 	{
	 		printf("%c", caesar( user_text[i],keycodes[key_count]));
	 		if (key_count < keylength - 1)
	 		{
	 		key_count++;
	 		}
	 		else
	 		{
	 		key_count = 0;
	 		}
		}
	 }

	 printf("\n");
	return 0;
}

//calculation of Caesar cipher
char caesar (char token, int key)
{
	if(islower(token))
	{
		return  ((((token - 97)+key)%26)+97);
	}
	else
	{
		return ((((token - 65)  +key)%26)+65);
	}
}