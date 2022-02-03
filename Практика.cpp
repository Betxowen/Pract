#include <iostream>
#include <locale.h>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

int hh, mm;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	
	printf("Введіть час у форматі: ГГ ХХ\n");
	scanf_s("%d %i", &hh, &mm);
    switch (hh) {
    case 0:
        printf("Нуль годин");
        break;
    case 1:
        printf("Одна година");
        break;
    case 2:
        printf("Дві години");
        break;
    case 3:
        printf("Три години");
        break;
    case 4:
        printf("Чотири години");
        break;
    case 5:
        printf("П'ять годин");
        break;
    case 6:
        printf("Шість годин");
        break;
    case 7:
        printf("Сім годин");
        break;
    case 8:
        printf("Вісім годин");
        break;
    case 9:
        printf("Дев'ять годин");
        break;
    case 10:
        printf("Десять годин");
        break;
    case 11:
        printf("Одинадцять годин");
        break;
    case 12:
        printf("Дванадцять годин");
        break;
    case 13:
        printf("Тринадцять годин");
        break;
    case 14:
        printf("Чотирнадцять годин");
        break;
    case 15:
        printf("П'ятнадцять годин");
        break;
    case 16:
        printf("Цістнадцять годин");
        break;
    case 17:
        printf("Сімнадцять годин");
        break;
    case 18:
        printf("Вісімнадцять годин");
        break;
    case 19:
        printf("Дев'ятнадцять годин");
        break;
    case 20:
        printf("Двадцять годин");
        break;
    case 21:
        printf("Двадцять одна година");
        break;
    case 22:
        printf("Двадцять дві години");
        break;
    case 23:
        printf("Двадцять три години");
        break;
    default:
        printf("Некоректно введенні години\n");
    }
    printf(" ");
    switch (mm) {
    case 0:
        printf("Нуль хвилин");
        break;
    case 1:
        printf("Одна хвилина");
        break;
    case 2:
        printf("Дві хвилини");
        break;
    case 3:
        printf("Три хвилини");
        break;
    case 4:
        printf("Чотири хвилини");
        break;
    case 5:
        printf("П'ять хвилин");
        break;
    case 6:
        printf("Шість хвилин");
        break;
    case 7:
        printf("Сім хвилин");
        break;
    case 8:
        printf("Вісім хвилин");
        break;
    case 9:
        printf("Дев'ять хвилин");
        break;
    case 10:
        printf("Десять хвилин");
        break;
    case 11:
        printf("Одинадцять хвилин");
        break;
    case 12:
        printf("Дванадцять хвилин");
        break;
    case 13:
        printf("Тринадцять хвилин");
        break;
    case 14:
        printf("Чотирнадцять хвилин");
        break;
    case 15:
        printf("П'ятнадцять хвилин");
        break;
    case 16:
        printf("Цістнадцять хвилин");
        break;
    case 17:
        printf("Сімнадцять хвилин");
        break;
    case 18:
        printf("Вісімнадцять хвилин");
        break;
    case 19:
        printf("Дев'ятнадцять хвилин");
        break;
    case 20:
        printf("Двадцять хвилин");
        break;
    case 21:
        printf("Двадцять одна хвилина");
        break;
    case 22:
        printf("Двадцять дві хвилини");
        break;
    case 23:
        printf("Двадцять три хвилини");
        break;
    case 24:
        printf("Двадцять чотири хвилини");
        break;
    case 25:
        printf("Двадцять п'ять хвилин");
        break;
    case 26:
        printf("Двадцять шість хвилин");
        break;
    case 27:
        printf("Двадцять сім хвилин");
        break;
    case 28:
        printf("Двадцять вісім хвилин");
        break;
    case 29:
        printf("Двадцять девять хвилин");
        break;
    case 30:
        printf("Тридцять хвилин");
        break;
    case 31:
        printf("Тридцять одна хвилина");
        break;
    case 32:
        printf("Тридцять дві хвилини");
        break;
    case 33:
        printf("Тридцять три хвилини");
        break;
    case 34:
        printf("Тридцять чотири хвилини");
        break;
    case 35:
        printf("Тридцять п'ять хвилин");
        break;
    case 36:
        printf("Тридцять шість хвилин");
        break;
    case 37:
        printf("Тридцять сім хвилин");
        break;
    case 38:
        printf("Тридцять вісім хвилин");
        break;
    case 39:
        printf("Тридцять девять хвилин");
        break;
    case 40:
        printf("Сорок хвилин");
        break;
    case 41:
        printf("Сорок одна хвилина");
        break;
    case 42:
        printf("Сорок дві хвилини");
        break;
    case 43:
        printf("Сорок три хвилини");
        break;
    case 44:
        printf("Сорок чотири хвилини");
        break;
    case 45:
        printf("Сорок п'ять хвилин");
        break;
    case 46:
        printf("Сорок шість хвилин");
        break;
    case 47:
        printf("Сорок сім хвилин");
        break;
    case 48:
        printf("Сорок вісім хвилин");
        break;
    case 49:
        printf("Сорок девять хвилин");
        break;
    case 50:
        printf("П’ятдесят хвилин");
        break;
    case 51:
        printf("П’ятдесят одна хвилина");
        break;
    case 52:
        printf("П’ятдесят дві хвилини");
        break;
    case 53:
        printf("П’ятдесят три хвилини");
        break;
    case 54:
        printf("П’ятдесят чотири хвилини");
        break;
    case 55:
        printf("П’ятдесят п'ять хвилин");
        break;
    case 56:
        printf("П’ятдесят шість хвилин");
        break;
    case 57:
        printf("П’ятдесят сім хвилин");
        break;
    case 58:
        printf("П’ятдесят вісім хвилин");
        break;
    case 59:
        printf("П’ятдесят девять хвилин");
        break;
    default:
        printf("Некоректно введенні хвилини\n");
    }

}