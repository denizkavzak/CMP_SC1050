#include <stdio.h>

static int secret = 100;

static void showSecret()
{
    printf("Secret = %d\n", secret);
}

void access()
{
    showSecret();
}