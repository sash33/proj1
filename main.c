#include <stdio.h>

//encryption(char message[], int key);

int main(){

char message[] = {'s', 'a', 's'};
int key = 1;
char encription[1];


encription[1] = message[0] + key;

printf("%c ", encription[1]);

return 0;
}

