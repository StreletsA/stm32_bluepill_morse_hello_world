#include <malloc.h>

#include "stm32f103x6.h"
#include "morse.h"
#include "stdio.h"

void delay(int);
void write_morse_symbol_to_led(morse_symbol);
void write_text_to_led(char*, int);

int main()
{
    RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;
    GPIOC->CRH |= GPIO_CRH_MODE13_0;

    char *text = "Hello world";
    int text_len = 10;

    while (1)
    {
        write_text_to_led(text, text_len);
    }
    

    return 0;
}

void delay(int ms) 
{
    for(int i = 0; i < 2000UL * ms; i++)
    {
        __NOP();
    }
}

void write_text_to_led(char *text, int text_len)
{
    morse_symbol *morse_symbols = define_morse_symbols(text, text_len);

    for (int i = 0; i < text_len; i++)
    {
        write_morse_symbol_to_led(morse_symbols[i]);
        delay(PAUSE_BETWEEN_SYMBOLS_IN_MS);
    }

    free(morse_symbols);
}

void write_morse_symbol_to_led(morse_symbol symbol)
{
    int *seq = symbol.seq;
    int seq_len = symbol.seq_len;

    for (int i = 0; i < seq_len; i++)
    {
        delay(PAUSE_BETWEEN_SIGNALS_IN_MS);

        GPIOC->BSRR |= GPIO_BSRR_BS13;

        if (seq[i] == DOT)
        {
            delay(DOT_TIME_IN_MS);
        }
        else
        {
            delay(DASH_TIME_IN_MS);
        }

        GPIOC->BSRR |= GPIO_BSRR_BR13;
    }

    free(seq);
}
