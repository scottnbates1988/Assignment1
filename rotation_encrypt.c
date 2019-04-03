/* Main function of the C program. */

#include<stdio.h>
#include<string.h>
 
int main_2()
{
	int arraySize = 50; //integer created to allow ease of increasing and decreasing array size of original message and encrypted message
	char rotationMessage[arraySize], rotationCode[arraySize]; 
	int rotation_Index, rotation_Key;
	
	printf("Enter message to be encrypted using Rotation Cipher: "); // prints to screen to prompt user to enter text to be encoded
	fgets(rotationMessage, sizeof(rotationMessage), stdin); //fgets is a function used to grab the message in the previous line and store in "substitutionMessage". (pointer to array of chars, max number of characters to be read,
	                                                        //and file that the characters are read from)
	printf("Enter key: ");      //prints to screen to prompt user to enter a number to encode the message by
	scanf("%d", &rotation_Key); //looks for an integer that is entered by the user and stores in integer rotation_Key
	
	for(rotation_Index = 0; rotation_Index < arraySize ; ++rotation_Index) {        //Loop used to continue reading each character of the original input or in this case "rotationMessage"
	   if (rotationMessage[rotation_Index] == ' ')          //if the character read for the current byte in the array equals a space
	        rotationCode[rotation_Index] == ' ';            //store the space in the same byte in rotationCode array
	   else 
	        rotationCode[rotation_Index] = (((rotationMessage[rotation_Index] - 'a') + rotation_Key) % 26) + 'a';  //if the above if statement is false, then subtract 'a'(ASCII value 97)
	}
	
	rotationMessage[rotation_Index] = '\0';
	
	printf("Encrypted message: %s", rotationCode);
	
	return 0;
}