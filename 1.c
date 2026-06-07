#include<stdio.h>
#include<stdbool.h>
int main()
{
    int age, ipa;
    char gen;
    
    printf("Enter your age: \n");
    scanf("%d", &age);
    getchar();
    printf("Enter your gender: \n");
    scanf("%c", &gen);
    if(gen == 'm' || gen == 'M')
        ipa=age/2+7;
    else
        ipa=(age-7)*2;
     printf("Your ideal partner age is %d", ipa);
    return 0;
}