#include "morse.h"
#include <malloc.h>

morse_symbol define_morse_symbol(char ch)
{
    switch (ch)
    {
        case 'a': 
        case 'A': return MORSE_A;
        case 'b':
        case 'B': return MORSE_B;
        case 'c':
        case 'C': return MORSE_C;
        case 'd':
        case 'D': return MORSE_D;
        case 'e':
        case 'E': return MORSE_E;
        case 'f':
        case 'F': return MORSE_F;
        case 'g':
        case 'G': return MORSE_G;
        case 'h':
        case 'H': return MORSE_H;
        case 'i':
        case 'I': return MORSE_I;
        case 'j':
        case 'J': return MORSE_J;
        case 'k':
        case 'K': return MORSE_K;
        case 'l':
        case 'L': return MORSE_L;
        case 'm':
        case 'M': return MORSE_M;
        case 'n':
        case 'N': return MORSE_N;
        case 'o':
        case 'O': return MORSE_O;
        case 'p':
        case 'P': return MORSE_P;
        case 'q':
        case 'Q': return MORSE_Q;
        case 'r':
        case 'R': return MORSE_R;
        case 's':
        case 'S': return MORSE_S;
        case 't':
        case 'T': return MORSE_T;
        case 'u':
        case 'U': return MORSE_U;
        case 'v':
        case 'V': return MORSE_V;
        case 'w':
        case 'W': return MORSE_W;
        case 'x':
        case 'X': return MORSE_X;
        case 'y':
        case 'Y': return MORSE_Y;
        case 'z':
        case 'Z': return MORSE_Z;
        case '1': return MORSE_1;
        case '2': return MORSE_2;
        case '3': return MORSE_3;
        case '4': return MORSE_4;
        case '5': return MORSE_5;
        case '6': return MORSE_6;
        case '7': return MORSE_7;
        case '8': return MORSE_8;
        case '9': return MORSE_9;
        case '0': return MORSE_0;
    
        default: return MORSE_EMPTY;
    }
}

morse_symbol *define_morse_symbols(char *string, int string_len)
{
    morse_symbol *morse_symbols = malloc(sizeof(char) * string_len);

    for (int i = 0; i < string_len; i++)
    {
        morse_symbols[i] = define_morse_symbol(string[i]);
    }

    return morse_symbols;
}