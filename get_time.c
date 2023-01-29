#include <time.h>
#include <stdio.h>

int main(void)
{
    long int s_time;
    struct tm *m_time;
    s_time = time (NULL);
    m_time = localtime (&s_time);


    fprintf(stdout, "%d.%02d.%d %d:%d:%d \n", m_time->tm_mday, m_time->tm_mon+1, m_time->tm_year+1900, m_time->tm_hour, m_time->tm_min, m_time->tm_sec);

    return 0;
}