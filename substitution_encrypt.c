/* Main function of the C program. */

#include<stdio.h>
#include<string.h>
 
int main_3()
{
    int arraySize = 50; //integer created to allow ease of increasing and decreasing array size of original message and encrypted message
	char *substitution_Key = "mnbvcxzlkjhgfdsapoiuytrewq"; //nominates the cypher code to be used in the exercise
	char substitutionMessage[arraySize], substitutionCode[arraySize]; //declares two arrays to be used - the first for original message to be entered into, and second to store the encrypted code
	int messageLength, index, i; //declares the integers needed for the exercise
	
	printf("Enter message to be encrypted using Substitution Cipher:"); //prints message to screen as prompt for user to enter the message to be encrypted
	fgets(substitutionMessage, sizeof(substitutionMessage), stdin); //fgets is a function used to grab the message in the previous line and store in "substitutionMessage". (pointer to array of chars, max number of characters to be read, 
	                                                               //and file that the characters are read from)
	messageLength = strlen(substitutionMessage); //determines the string length of "substitutionMessage"/ or original input
	
	substitutionCode[messageLength];       //defines array size of the encrypted message
	for (i=0; i < messageLength; i++)   {       //Loop used to continue through each character of the original input or in this case "substitutionMessage"
	    index = substitutionMessage[i] - 'a'; //'a' (ASCII value 97) is subtracted to ensure that the character is indexed from the beginning of the substitution key
	        if (index < 0)  {       //defines that if the character ASCII value is less than zero, then it equals a space
	            substitutionCode[i] = ' '; //submit a space into the message in the current array byte if index is less than zero
	        }
	        else    {
	            substitutionCode[i] = substitution_Key[index]; //if index value is greater than 0, then the substitution key will be used to index by the given value to give the encrypted character
	        }
	}
	substitutionCode[messageLength] = 0; //this null terminates the string which effectively tells you where the end of the string is
	
	printf("Encrypted message: %s", substitutionCode); //prints encrypted message to screen
	
	return 0;
}