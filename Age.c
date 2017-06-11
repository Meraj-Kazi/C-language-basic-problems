#include<stdio.h>
int main(void)
{
    int r, s, a;

    printf("Enter the age of Ram: ");
    scanf("%d", &r);
    printf("Enter the age of Shyam: ");
    scanf("%d", &s);
    printf("Enter the age of Ajay: ");
    scanf("%d", &a);

    if (r < s && r < a) printf("Ram is the youngest");
    else if (s <r && s < a) printf("Shyam is the youngest");
    else printf("Ajay is the youngest");

    return 0;
}
