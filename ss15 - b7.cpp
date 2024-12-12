#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
    int countLetter = 0;
    int countNumber = 0;
    int countSpecialChar = 0;
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            countLetter++;
        }
        else if (str[i] >= 48 && str[i] <= 57){
        	countNumber++;
		}
		else{
			countSpecialChar++;
		}
    }
    printf("String has %d char is letter\n",countLetter);
    printf("String has %d char is number\n",countNumber);
    printf("String has %d char is special char\n",countSpecialChar);
    return 0;
}
