#include <ctype.h> // Para usar isalpha e isupper

int temInicialMaiuscula(char *str) {
    while (*str) {
        if (!isalpha(*str)) { // se caractere atual não é letra, verifica o próximo
            str++;
            if (!*str) // chegou no final da string
                return 0;
            if (isupper(*str))
                return 1; // encontrei palavra que começa com maiúscula, retorna
        } else {
            str++;
        }
    }
    return 0;
}