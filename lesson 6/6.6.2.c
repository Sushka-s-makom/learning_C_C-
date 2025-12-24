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

double reley(double x1, double x2)
{
    return x1 * x1 + x2 * x2;
}

int main(void)
{
    double y = reley(norm(0, 5), norm(0, 5));
    
    return 0;
}