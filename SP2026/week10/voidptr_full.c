#include <stdio.h>

void printArray(void *arr, char type, int size);

int main(void)
{
    int arrInt[] = {1, 2, 3, 4, 5};
    float arrFloat[] = {1.1f, 2.2f, 3.3f};
    double arrDouble[] = {10.5, 20.5, 30.5};
    char arrChar[] = {'A', 'B', 'C', 'D'};

    printArray(arrInt, 'I', 5);
    printArray(arrFloat, 'F', 3);
    printArray(arrDouble, 'D', 3);
    printArray(arrChar, 'C', 4);

    return 0;
}

void printArray(void *arr, char type, int size)
{
    int i;

    switch (type)
    {
        case 'I':
        {
            int *p = (int *)arr;
            for (i = 0; i < size; i++)
            {
                printf("%d ", p[i]);
            }
            break;
        }

        case 'F':
        {
            float *p = (float *)arr;
            for (i = 0; i < size; i++)
            {
                printf("%.2f ", p[i]);
            }
            break;
        }

        case 'D':
        {
            double *p = (double *)arr;
            for (i = 0; i < size; i++)
            {
                printf("%.2lf ", p[i]);
            }
            break;
        }

        case 'C':
        {
            char *p = (char *)arr;
            for (i = 0; i < size; i++)
            {
                printf("%c ", p[i]);
            }
            break;
        }

        default:
            printf("Unsupported type");
    }

    printf("\n");
}