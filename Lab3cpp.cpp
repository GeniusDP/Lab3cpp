#include <stdio.h>
#include <cmath>

using namespace std;


//константа точности
#define EPS 1e-5

int main()
{
    /*
        xPrev==x(n-1)
        xCur==x(n)
    */
    double xPrev, xCur;
    double ans;//ответ
    //инициализация
    xPrev = 1;
    xCur = 1;
    //основной цикл
    do {
        xPrev = xCur;
        xCur = (2 - pow(xPrev, 3)) / 5;
        printf("xPrev = %10.5f,\txCur = %10.5f\n", xPrev, xCur);
    } while (fabs(xCur - xPrev) >= EPS);
    //вывод ответа
    ans = xCur;
    printf("Answer is: %10.5f", ans);
    return 0;
}
