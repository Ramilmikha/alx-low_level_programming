#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 12
int main(void)
{
int i;  
char password[PASSWORD_LENGTH + 1]; /* +1 for the null terminator */
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
const int charset_length = sizeof(charset) - 1;
srand(time(NULL));
for ( i = 0; i < PASSWORD_LENGTH; i++)
{
int random_index = rand() % charset_length;
password[i] = charset[random_index];
}
password[PASSWORD_LENGTH] = '\0';
if (strcmp(password, "Tada! Congrats") == 0)
{
printf("Tada! Congrats\n");
}
else
{
printf("Wrong password\n");
}
return (0);
}
