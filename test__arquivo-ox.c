#include <assert.h>

int validar(char c);

int main(void)
{
    char validos[] = {'X', 'O'};
    char invalidos[] = {'A', 'x'};

    for (int i = 0; i < 2; i++) {
        assert(validar(validos[i]) == 1);
    }

    for (int i = 0; i < 2; i++) {
        assert(validar(invalidos[i]) == 0);
    }

    return 0;
}
