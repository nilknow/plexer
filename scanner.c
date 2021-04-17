#include <stdio.h>

typedef enum {
    IF, ELSEIF, WHILE, ADD
} TokenType;

typedef struct {
    TokenType type;
    union {
        char *stringVal;
        int *intVal;
        double *doubleVal;
        float *floatVal;
    } value;
} Token;

int main() {
    printf("%s", "hi");
    Token token;
    token.type = IF;
    token.type = ELSEIF;
    return 0;
}