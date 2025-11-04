// Multi-System Light-Weight Calculator (MSLWC v1.01) "Now with more swearing!"
// Code Written by: Gavin "Nysp" Acton 
// (C) November 3rd, 2025
#include "stdio.h"
#include "stdlib.h"
#include "math.h"           // I DON'T EVEN NEED THIS, WHY THE FUCK IS IT INCLUDED!?!?

// This part is actually cool.
void clearscreen(void){
    //Windows
    #ifdef _WIN32
    system("cls");   // Oh, so now you want to be the cool kid... Fuck you Win32...
    #endif
    // Linux
    #ifdef __linux__
    system("clear");  // Ok, this part actually makes sense...
    #endif
    // Macintosh
    #ifdef __APPLE__
    system("clear");
    #endif
    // Unix
    #ifdef __unix__
    system("clear");
    #endif
}

int main(void){
    float a;
    float b;
    float c;
    int opr = 0;

    if (!a == 0){
        a == 0;
        clearscreen();
    }
   	printf("Insert Value for A: ");
	scanf("%f", &a);

    if (!b == 0){
        b == 0;
       	clearscreen();
    }
   	printf("Insert value for B: ");
    scanf("%f", &b);
    
    clearscreen();
    printf("Insert Operator Type\n(1 = +, 2 = -, 3 = *, 4 = /): ");
    scanf("%d", &opr);
    
    // This is the best I can do for now, please make fun of my shitty code all you want, stackoverflow people.
    if(1 == opr){
        clearscreen();
        c = a + b;
	    printf("The sum of your problem is: %f\n", c);
    }

    if(2 == opr){
        clearscreen(); 
        c = a - b;
	    printf("The difference of your problem is: %f\n", c);
    }
                                                // Guess what, if this is any value before or after the numbers given, IT FUCKING CRASHES
    if(3 == opr){
        clearscreen();
        c = a * b;
	    printf("The product of your problem is: %f\n", c);
    }

    if(4 == opr){
    	clearscreen(); 
        c = a / b;
    	printf("The product of your problem is: %f\n", c);
    }
    return 0;           // Can you believe that this is actually going to be a game engine someday? I know I don't...
}