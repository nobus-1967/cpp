// Программа угадывания числа бинарным поиском
#include <stdio.h>

int main(void)
{
    char response;
    int guess = 50;
    int upper_limit = 100;
    int lower_limit = 1;

    printf("Выберите целое число в интервале от 1 до 100.\n");
    printf("Я попробую угадать его.\n");
    printf("Введите символ =, если моя догадка верна,\n");
    printf("<, если загаданное число меньше моей догадки, или\n");
    printf(">, если загаданное число больше моей догадки.\n");
    printf("\nИтак, Вашим числом является %d? _\b", guess);

    while ((response = getchar()) != '=')
    {
        if (response == '>')
        {
            lower_limit = guess;
            guess = (upper_limit + lower_limit) / 2;
        }
        else if (response == '<')
        {
            upper_limit = guess;
            guess = (upper_limit + lower_limit) / 2;
        }
        else
        {
            printf("Пожалуйста введите = или < или >. _\b");

            while (getchar() != '\n')
                continue;
            continue;
        }

        printf("Ладно, тогда это %d? _\b", guess);

        while (getchar() != '\n')
            continue;
    }

    printf(" \nЯ знал, что у меня когда-нибудь получится!\n");

    return 0;
}
