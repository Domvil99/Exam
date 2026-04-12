#include <unistd.h>


int main(int argc, char **argv)
{
    if (argc == 2) {
        int i = 0, prev = 0; // 0 ninguno, 1 letra, 2 número
        while (argv[1][i] != '\0') {
            char c = argv[1][i];
            int curr = 0;
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) curr = 1;
            else if (c >= '0' && c <= '9') curr = 2;

            if (curr != 0 && curr != prev) {
                if (prev != 0) write(1, " ", 1);
                if (curr == 1) write(1, "letra", 5);
                else           write(1, "numero", 6);
                prev = curr;
            }
            i++;
        }
        write(1, "\n", 1);
    }
    return 0;
}

#include <unistd.h>

int main(int argc, char **argv)
{   
    int i = 0;
    char anterior = '\0';  // guarda el tipo anterior: 'l' (letra), 'n' (número)

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') ||
                (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
            {
                if (anterior != 'l')   // solo imprime si cambia a letra
                {
                    write(1, "no", 2);
                    anterior = 'l';
                }
            }
            else if (argv[1][i] >= '0' && argv[1][i] <= '9')
            {
                if (anterior != 'n')   // solo imprime si cambia a número
                {
                    write(1, "si", 2);
                    anterior = 'n';
                }
            }
            else
            {
                anterior = '\0'; // reinicia si es otro símbolo
            }
            i++;
        }
        write(1, "\n", 1);
    }
    return 0;
}




int main(int argc, char **argv)
{   
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') ||
                (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
            {
                
                write(1, "no", 2);
            }
            else if (argv[1][i] >= '0' && argv[1][i] <= '9')
            {
               
                write(1, "si", 2);
            }
            i++;
        }

        /*<<if (hay_letra)
            write(1, "no", 2);
        if (hay_numero)
            write(1, "si", 2);*/
        write(1, "\n", 1);
    }
    return 0;
}


/*int main()
{
    int i = 1;
    char buffer[4];

    while(i <= 100)
    {
        int len = snprintf(buffer, sizeof(buffer), "%d", i);
        write(1, buffer, len);
        i++;
    }
}
*/

/*
void print_number(int n) {
    char buf[4]; // suficiente para "100\n" + '\0'
    int len = 0;

    // convertir manualmente el número a texto
    if (n >= 100) {
        buf[len++] = (n / 100) + '0';          // centenas
        buf[len++] = ((n / 10) % 10) + '0';    // decenas
        buf[len++] = (n % 10) + '0';           // unidades
    } else if (n >= 10) {
        buf[len++] = (n / 10) + '0';           // decenas
        buf[len++] = (n % 10) + '0';           // unidades
    } else {
        buf[len++] = n + '0';                  // unidades
    }

    buf[len++] = '\n'; // salto de línea
    write(1, buf, len);
}
*/

