#include <stdio.h>
#include <string.h>

struct Marksheet
{
    int student;
    int rn;
    char fullName[20];
    int ch;
    int Math;
    int Ph;
};

int main()
{

    struct Marksheet arr[10];

    int n;
    printf("Enter Total Students : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter student Number : ");
        gets(arr[i].fullName);
        printf("Roll no => ");
        scanf("%d", &arr[i].rn);
        printf("Name => ");
        scanf("%s", arr[i].fullName);
        printf("Chemistry => ");
        scanf("%d", &arr[i].ch);
        printf("Mathematics => ");
        scanf("%d", &arr[i].Math);
        printf("Physics => ");
        scanf("%d", &arr[i].Ph);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i].ch >= 100 || arr[i].Math >= 100 || arr[i].Ph >= 100)
        {
            printf("invalid");
            break;
        }
        printf("\n");
        printf("%s", arr[i].fullName);
        printf(" (%d)\n", arr[i].rn);
        printf("Chemistry => %d\n", arr[i].ch);
        printf("Mathematics => %d\n", arr[i].Math);
        printf("Physics => %d\n", arr[i].Ph);
        printf("Total => %d\n", arr[i].ch + arr[i].Math + arr[i].Ph);
        float perc = (arr[i].ch + arr[i].Math + arr[i].Ph) / 3;
        printf("percentage => %.2f\n", perc);
    }

    return 0;
}