#include <stdio.h>
#include <stdlib.h>

//Print space
void print (int size)
{
    int c = 0;

    // If no space to print print just H and return
    if (size == 0)
    {
        printf("H\n");
        return;
    }

    // print spaces + H
    for (; c < size; ++c)
    {
        printf(" ");
    }
    printf("H\n");
}

// Funktsiooni kasutades ei pea kasutama goto et hüpata välja while loop'ist
void help ()
{
    // temp buffer
    char temp[256];
    //Space counter
    int count = 0;

    //While (true) endless loop
    while (1)
    {
        //User input
        scanf("%s", temp);

        //Clean screen (windows)
        //system("cls");
        //Clean screen (unix)
        //system("clear");

        // a - subtract, s - stay, d - add, q - quit, default do nothing
        switch (temp[0])
        {
        // subtract space
        case 'a':
            if (count > 0)
            {
                --count;
            }
            print(count);
            break;
        // statys same
        case 's':
            print(count);
            break;
        // add space
        case 'd':
            ++count;
            print(count);
            break;
        // quit
        case 'q':
            return;
        default:
            break;
        }
    }
}

// main Func
int main (int argc, char *argv[])
{
    //         ^
    // look up |
    help();

    return 0;
}
