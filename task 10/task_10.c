//A signup form takes a username (up to 20 characters) as input. Count how many vowels andconsonants it contains (a basic strength heuristic), then convert the username to all uppercase to store it in the system's case-insensitive username database.
#include <stdio.h>
#include <ctype.h>
int main(){
    char user_name[21];
    int vowels=0,consonant=0;
    printf("Enter Username");
    scanf("%20s",&user_name);
     for (int i = 0; user_name[i] != '\0'; i++) {
        user_name[i] = toupper((unsigned char)user_name[i]);
        char ch = user_name[i];
         if (isalpha((unsigned char)ch)) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonant++;
            }}}
    printf("Vowels : %d\n",vowels);
    printf("Consonants : %d\n",consonant);
    printf("User Name %s",user_name);
    return 0;

     
    
}