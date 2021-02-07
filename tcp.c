// This is a C program that intends to achieve an echo server, that send whatever a client sending back to the client
// The thing that a client send will be enocded in a form that includes a msg_id (1 byte), payload_len (1 byte), and payload
// This program is written by Hongwei Wang, the first web-programming project he ever wrties 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <ctype.h>

#define ERROR_MSG "Wrong input, program terminates...\n"

int main(void){
    while(1){
        printf("A TCP echo server simulator written in C\n\n");

        printf("Type 'e' to exit, or any other key to connect to a TCP echo server: ");
        char x;
        if (scanf("%c", &x) != 1){
            printf("%s", ERROR_MSG);
            return -1;
        }
        if (tolower(x) == 'e'){
            printf("Exiting the program...\n");
            return 0;
        }

        



    }
}

bool connect(void){

}
/*
char* encode(void){

}

char* decode(void){

}

char* client_ask_info(void){
    
}

bool client_send(void){

}

bool client_receive(void){

}

bool server_send(void){

}

bool server_receive(void){

}

bool cs_compare(void){

}
*/

