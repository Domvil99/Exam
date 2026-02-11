#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {

    }write(1, "\n", 1);
    return(0);
}



























/*
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *p = argv[1];
        
        while(*p)
        {
            char c = *p;
            if(c >= 'A' && c <= 'Z')
            {
                c += 32;
                write(1, "_", 1);
            }
            write(1, &c, 1);
            p++;
        }
    }
    write(1, "\n", 1);
}
*/

//helloWord
//hello_word

//usando malloc

/*#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *s = argv[1];
        int len = 0;

        // 1) calcular tamaño necesario
        for (int i = 0; s[i]; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                len += 2;      // "_" + letra minúscula
            else
                len += 1;
        }

        // 2) reservar memoria
        char *out = malloc(len + 1);
        if (!out)
            return 1;

        // 3) construir el string
        int j = 0;
        for (int i = 0; s[i]; i++)
        {
            char c = s[i];

            if (c >= 'A' && c <= 'Z')
            {
                out[j++] = '_';
                c += 32;
            }
            out[j++] = c;
        }
        out[j] = '\0';

        // 4) imprimir
        write(1, out, j);
        write(1, "\n", 1);

        // 5) liberar memoria
        free(out);
    }
    else
        write(1, "\n", 1);
}*/

// usando realloc

/*#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *s = argv[1];
        char *out = NULL;
        int size = 0;

        while (*s)
        {
            char c = *s;

            if (c >= 'A' && c <= 'Z')
            {
                // añadir "_"
                out = realloc(out, size + 1);
                out[size++] = '_';

                // convertir a minúscula
                c += 32;
            }

            // añadir el carácter final
            out = realloc(out, size + 1);
            out[size++] = c;

            s++;
        }

        // imprimir
        write(1, out, size);
        write(1, "\n", 1);

        free(out);
    }
    else
        write(1, "\n", 1);
}*/