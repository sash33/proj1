#include <stdio.h>

//encryption(char message[], int key);

int main(){

char message[] = {'a', 'b', 'c'};

int key = 1;
char encription[2];


for(int i=0; i<3; i++){
  
    encription[i] = message[i] + key;
    printf("%c ", encription[i]);
}

//printf("%c %c %c ", encription[0], encription[1], encription[2]);

return 0;
}