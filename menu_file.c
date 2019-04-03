/* Main function of the C program. */

#include<stdio.h>
 
int main()
{
    int cipherChoice, rotationChoice, subChoice;
    
    menu:
    
	printf("Choose from the following Cipher options -\n");
    printf("1: Rotation Cipher\n");
    printf("2: Substitution Cipher\n");
    printf("3: Exit Program\n");
    printf("    Choice:  ");

    scanf("%d", &cipherChoice);

    cipherChoice:

    switch(cipherChoice) {
        case 1:
            printf("\nRotation Cipher has been chosen.\n");
            printf("Choose from the following options:\n");
            printf("1: Encrypt\n");
            printf("2: Decrypt\n");
            printf("3: Exit Program\n");
            scanf("%d", &rotationChoice);
                switch(rotationChoice)  {
                    case 1:
                        printf("You have chosen to encrypt via Rotation Cipher\n");
                        printf("Enter key to encrypt by:");
                    break;
                
                    case 2:
                        printf("You have chosen to decrypt via Rotation Cipher\n");
                        printf("Enter key to decrypt by:");
                    break;
                
                    case 3:
                        printf("Exit Rotation Cipher chosen.\n");
                        goto cipherChoice;
                    break;
                
                    default:
                        printf("Invalid choice. Choose from options 1-3.");
                        goto cipherChoice;
                    break;
                }
        break;

        subChoice:

        case 2:
            printf("\nSubstitution Cipher has been chosen.\n");
            printf("Choose from the following options:\n");
            printf("1: Encrypt\n");
            printf("2: Decrypt\n");
            printf("3: Exit Program\n");
            scanf("%d", &subChoice);
                switch(subChoice)  {
                    case 1:
                        printf("You have chosen to encrypt via Substitution Cipher\n");
                        printf("Enter key to encrypt by:");
                    break;
                
                    case 2:
                        printf("You have chosen to decrypt via Substitution Cipher\n");
                        printf("Enter key to decrypt by:");
                    break;
                
                    case 3:
                        printf("Exit Substitution Cipher chosen.\n");
                        goto subChoice;
                    break;
                
                    default:
                        printf("Invalid choice. Choose from options 1-3.");
                        goto subChoice;
                    break;
                }
        break;

        case 3:
            printf("Exit program chosen.\n");
        break;
        
        default:
            printf("Invalid choice. Choose from options 1-3.");
            goto menu;
        break;
    }

	return 0;
}