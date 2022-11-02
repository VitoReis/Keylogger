#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void main(){
    int caracter;
    FILE *file;
    file = fopen("output.txt","a");
    if(file == NULL){
      printf("ERROR");
      exit(1);
    }

    while(1){
        if(kbhit()){                            // Check if a key has been pressed
            caracter = getch();                 // Stores the pressed key in a variable
            if(caracter == 27){                 // If the key is ESC the program is terminated
                break;
            }else{
                fprintf(file, "%c", caracter);  // Stores the pressed key in the file
            }
        }
    }
    fclose(file);
}