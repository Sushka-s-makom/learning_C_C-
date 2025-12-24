#include <stdio.h>
#include <stdlib.h>

double norm(int a, int b)
{
    int N = 100;
    double sum = 0.0;

    for(int i = 0; i < N; i++){
        double x = ((double)rand() / RAND_MAX)*(b-a) + a;
        sum += x;
    }
    double y = (double)sum / N;
    return y;
}

int main(void)
{
    double y = norm (-2, 10);

    return 0;
}