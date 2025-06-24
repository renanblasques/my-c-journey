#include <stdio.h>

int count_pairs(int v[], int n);
int count_odds(int v[], int n);
int find_biggest(int v[], int n);
int find_smallest(int v[], int n);
double calculate_average(int v[], int n);
int count_above_average(int v[], int n, double average);

int main()
{
    int n;
    scanf("%d", &n);
    int numVector[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numVector[i]);
    }

    printf("Pares: %d | Impares: %d\n", 
        count_pairs(numVector, n), count_odds(numVector, n));
    printf("Maior: %d | Menor: %d\n", 
        find_biggest(numVector, n), find_smallest(numVector, n));
    printf("Media: %.2lf\n", 
        calculate_average(numVector, n));
    printf("Acima da media: %d\n", 
        count_above_average(numVector, n, calculate_average(numVector, n)));
    

    return 0;
}

int count_pairs(int v[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int count_odds(int v[], int n)
{
    int count = n - count_pairs(v, n);

    return count;
}

int find_biggest(int v[], int n)
{
    int biggestNumber = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] > biggestNumber)
        {
            biggestNumber = v[i];
        }
    }

    return biggestNumber;
}

int find_smallest(int v[], int n)
{
    int smallestNumber = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] < smallestNumber)
        {
            smallestNumber = v[i];
        }
    }

    return smallestNumber;
}

double calculate_average(int v[], int n)
{
    double average;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    average = (double) sum / n;

    return average;
}

int count_above_average(int v[], int n, double average)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > average)
        {
            count++;
        }
    }

    return count;
}