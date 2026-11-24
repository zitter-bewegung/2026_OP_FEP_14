#include <stdio.h>

int task = 1;

void print_binary(unsigned int n)
{
    for(int i = 7; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
}

int main(void)
{
    printf("Ex.1.%d \n", task);
    printf("Hello, World!\n\n");
    task++;
    
    printf("Ex.1.%d\n", task);
    int number = 75;
    printf("Number:\n");
    printf("\t1.Decimal: %d\n", number);
    printf("\t2.Binary: ");
    print_binary(number);
    printf("\n");
    printf("\t3.Octal: %o\n", number);
    printf("\t4.Hex: %x\n", number);
    task++;
    
    printf("Ex.1.%d\n", task);
    float num_flot = 75.121212;
    printf("Float number: \n");
    printf("\t1.Float: %f\n", num_flot);
    printf("\t2.Float with precision: %.2f\n", num_flot);
    printf("\t3.Ecponential: %e\n", num_flot);
    printf("\t4.Flex: %g\n", num_flot);
    task++;
    
    printf("Ex.1.%d\n", task);
    char ch = '@';
    char str[] = "Hello";
    int* pointer = &number;
    printf("Char, string, pointer: \n");
    printf("\t1.Char: %c\n", ch);
    printf("\t2. Stirng: %s\n", str);
    printf("\t3. Pointer: %p\n", pointer);
    
    //------------------------------------------------
    
    printf("Ex.2\n");

    char name[2][30], email[2][30], color[2][30], car[2][30];
    char song[2][30], book[2][30], phone[2][30], movie[2][30];

    for (int i = 0; i < 2; i++) {
        printf("\n--- Person %d ---\n", i + 1);

        printf("Enter your name: ");
        scanf(" %29[^\n]", name[i]);
        printf("Enter your email: ");
        scanf(" %29[^\n]", email[i]);
        printf("Enter your favorite color: ");
        scanf(" %29[^\n]", color[i]);
        printf("Enter your favorite car: ");
        scanf(" %29[^\n]", car[i]);
        printf("Enter your favorite song: ");
        scanf(" %29[^\n]", song[i]);
        printf("Enter your favorite book: ");
        scanf(" %29[^\n]", book[i]);
        printf("Enter your favorite phone: ");
        scanf(" %29[^\n]", phone[i]);
        printf("Enter your favorite movie: ");
        scanf(" %29[^\n]", movie[i]);
    }

    const char *line =
        "+----+----------------------+---------------------------+-----------------+-----------------+\n";

    printf("\n%s", line);
    printf("| %-2s | %-20s | %-25s | %-15s | %-15s |\n",
           "No", "Name", "Email", "Color", "Car");
    printf("%s", line);
    for (int i = 0; i < 2; i++) {
        printf("| %-2d | %-20s | %-25s | %-15s | %-15s |\n",
               i + 1, name[i], email[i], color[i], car[i]);
        printf("%s", line);
    }

    const char *line2 =
        "+----+----------------------+----------------------+----------------------+----------------------+\n";

    printf("\n%s", line2);
    printf("| %-2s | %-20s | %-20s | %-20s | %-20s |\n",
           "No", "Song", "Book", "Phone", "Movie");
    printf("%s", line2);
    for (int i = 0; i < 2; i++) {
        printf("| %-2d | %-20s | %-20s | %-20s | %-20s |\n",
               i + 1, song[i], book[i], phone[i], movie[i]);
        printf("%s", line2);
    }

    return 0;
}
