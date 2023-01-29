#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int current_year;
int current_month;
int current_day;

void today(void)
{
    long int s_time;
    struct tm *m_time;
    s_time = time (NULL);
    m_time = localtime (&s_time);
    current_year = m_time->tm_year + 1900;
    current_month = m_time->tm_mon;
    current_day = m_time->tm_mday;
}

int main(void)
{
    setlocale(LC_ALL, "Russian"); // enable Russian language support
    today();
    printf("Год: %d %d %d", current_year, current_month, current_day);
}

