#define DOT  1
#define DASH 0

#define DOT_TIME_IN_MS 85
#define DASH_TIME_IN_MS 500
#define PAUSE_BETWEEN_SIGNALS_IN_MS 50
#define PAUSE_BETWEEN_SYMBOLS_IN_MS 50

#define MORSE_SYMBOL_CAST (morse_symbol)

#define MORSE_EMPTY MORSE_SYMBOL_CAST {{0}, 0}

#define MORSE_A MORSE_SYMBOL_CAST {{DOT, DASH}, 2}
#define MORSE_B MORSE_SYMBOL_CAST {{DASH, DOT, DOT, DOT}, 4}
#define MORSE_C MORSE_SYMBOL_CAST {{DASH, DOT, DASH, DOT}, 4}
#define MORSE_D MORSE_SYMBOL_CAST {{DASH, DOT, DOT}, 3}
#define MORSE_E MORSE_SYMBOL_CAST {{DOT,}, 1}
#define MORSE_F MORSE_SYMBOL_CAST {{DOT, DOT, DASH, DOT}, 4}
#define MORSE_G MORSE_SYMBOL_CAST {{DASH, DASH, DOT}, 3}
#define MORSE_H MORSE_SYMBOL_CAST {{DOT, DOT, DOT, DOT}, 4}
#define MORSE_I MORSE_SYMBOL_CAST {{DOT, DOT}, 2}
#define MORSE_J MORSE_SYMBOL_CAST {{DOT, DASH, DASH, DASH}, 4}
#define MORSE_K MORSE_SYMBOL_CAST {{DASH, DOT, DASH}, 3}
#define MORSE_L MORSE_SYMBOL_CAST {{DOT, DASH, DOT, DOT}, 4}
#define MORSE_M MORSE_SYMBOL_CAST {{DASH, DASH}, 2}
#define MORSE_N MORSE_SYMBOL_CAST {{DASH, DOT}, 2}
#define MORSE_O MORSE_SYMBOL_CAST {{DASH, DASH, DASH}, 3}
#define MORSE_P MORSE_SYMBOL_CAST {{DOT, DASH, DASH, DOT}, 4}
#define MORSE_Q MORSE_SYMBOL_CAST {{DASH, DASH, DOT, DASH}, 4}
#define MORSE_R MORSE_SYMBOL_CAST {{DOT, DASH, DOT}, 3}
#define MORSE_S MORSE_SYMBOL_CAST {{DOT, DOT, DOT}, 3}
#define MORSE_T MORSE_SYMBOL_CAST {{DOT}, 1}
#define MORSE_U MORSE_SYMBOL_CAST {{DOT, DOT, DASH}, 3}
#define MORSE_V MORSE_SYMBOL_CAST {{DOT, DOT, DOT, DASH}, 4}
#define MORSE_W MORSE_SYMBOL_CAST {{DOT, DASH, DASH}, 3}
#define MORSE_X MORSE_SYMBOL_CAST {{DASH, DOT, DOT, DASH}, 4}
#define MORSE_Y MORSE_SYMBOL_CAST {{DASH, DOT, DASH, DASH}, 4}
#define MORSE_Z MORSE_SYMBOL_CAST {{DASH, DASH, DOT, DOT}, 4}

#define MORSE_1 MORSE_SYMBOL_CAST {{DOT, DASH, DASH, DASH, DASH}, 5}
#define MORSE_2 MORSE_SYMBOL_CAST {{DOT, DOT, DASH, DASH, DASH}, 5}
#define MORSE_3 MORSE_SYMBOL_CAST {{DOT, DOT, DOT, DASH, DASH}, 5}
#define MORSE_4 MORSE_SYMBOL_CAST {{DOT, DOT, DOT, DOT, DASH}, 5}
#define MORSE_5 MORSE_SYMBOL_CAST {{DOT, DOT, DOT, DOT, DOT}, 5}
#define MORSE_6 MORSE_SYMBOL_CAST {{DASH, DOT, DOT, DOT, DOT}, 5}
#define MORSE_7 MORSE_SYMBOL_CAST {{DASH, DASH, DOT, DOT, DOT}, 5}
#define MORSE_8 MORSE_SYMBOL_CAST {{DASH, DASH, DASH, DOT, DOT}, 5}
#define MORSE_9 MORSE_SYMBOL_CAST {{DASH, DASH, DASH, DASH, DOT}, 5}
#define MORSE_0 MORSE_SYMBOL_CAST {{DASH, DASH, DASH, DASH, DASH}, 5}

typedef struct
{
    int seq[6];
    int seq_len;
} morse_symbol;

morse_symbol define_morse_symbol(char);
morse_symbol *define_morse_symbols(char*, int);