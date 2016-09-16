#include <stdio.h>

typedef struct token {
    int a;
    int b;
} token_t;


int setter(token_t * in) {
    in->a = 1;
    return 0;
}

int getter(token_t in) {
    printf("token fields: a = %d\n", in.a);
    return in.a;
}

int main(int argc, char **argv)
{

    token_t token;
    setter(&token);
    getter(token);

}
