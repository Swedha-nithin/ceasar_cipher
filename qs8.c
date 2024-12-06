#include<stdio.h>
#include<string.h>

void encrypt_message(char *str, int shift, char *encrypt);
void decrypt_message(char *encrypt, int shift, char *decrypt);
int main()
{
    char str[100];
    char encrypt[100];
    char decrypt[100];
    int shift;
    printf("Enter shift value\n");
    scanf("%d", &shift);
    printf("Enter the plain text message\n");
    scanf(" %[^\n]", str);
    encrypt_message(str,shift,encrypt);
    printf("Encrypted message : %s\n", encrypt);
    decrypt_message(encrypt,shift,decrypt);
    printf("Decrypted message : %s\n", decrypt);
    return 0;
}
void encrypt_message(char *str, int shift, char *encrypt)
{
    int temp;
    for(int i=0; str[i]!=0; i++)
    {
        if(str[i] == ' ')
            encrypt[i] = ' ';
        else 
        {
            temp = ((int)str[i])+shift;
            encrypt[i] = (char)temp;
        }
    }
}

void decrypt_message(char *encrypt, int shift, char *decrypt)
{
    int temp;
    for(int i=0; encrypt[i]!=0; i++)
    {
        if(encrypt[i] == ' ')
            decrypt[i] = ' ';
        else 
        {
            temp = ((int)encrypt[i])-shift;
            decrypt[i] = (char)temp;
        }
    }
}
