//WAP to print armstrong no. in a range

#include <stdio.h>
#include <math.h>

int main() {
    int start, end, n, temp, r, count, s;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (n = start; n <= end; n++) {
        temp = n;
        count = 0;

        while (temp > 0) {
            count++;
            temp=temp/10;
        }

        temp = n;
        s = 0;

        while (temp > 0)
        {
            r = temp % 10;
            s=s+(int)pow(r,count);
            temp /= 10;
        }

        if (s == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}