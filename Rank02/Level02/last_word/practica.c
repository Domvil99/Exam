#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
   
    }write(1, "\n", 1);
return(0);
} 







//   hola  //





















int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *fin = argv[1];

        while(*fin)
            fin++;
        fin--;
        while(fin >= argv[1] && (*fin == 32 || *fin == 9))
            fin--;
        if(fin < argv[1])
            {
                write(1, "\n", 1);
                return(0);
            }
        char *start = fin;
        while(start >= argv[1] && *start != 32 && *start != 9)
            start--;   //hola 
        start++;
        while(start <= fin)
            {
                write(1, start, 1);
                start++;
            }

    }
    write(1, "\n", 1);
    return(0); 
}

