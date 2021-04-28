// Перевод из шкалы Фаренгейта в шкалы Цельсия и Кельвина
#include <stdio.h>

void Temperatures(double Fahrenheit);

int main(void)
{
    double Fahrenheit;

    printf("Введите температуру по Фаренгейту: ");

    while (scanf("%lf", &Fahrenheit) == 1)
    {
        Temperatures(Fahrenheit);

        printf("\n");
        printf("Для продолжения работы введите новое значение\n");
        printf("температуры по шкале Фаренгейта (Q/q - выход): ");
    }

    return 0;
}

void Temperatures(double Fahrenheit)
{
    const double Celsius_multiply = 5.0 / 9.0;
    const double Celsius_subtract = 32.0;
    const double Kelvin_add = 273.16;

    float Celsius, Kelvin;

    Celsius = (Fahrenheit - Celsius_subtract) * Celsius_multiply;
    Kelvin = Celsius + Kelvin_add;

    printf("%.2lf по Фаренгейту равны %.2lf по Цельсию\n", Fahrenheit, Celsius);
    printf("и %.2lf по Кельвину\n", Kelvin);
}
