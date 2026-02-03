#include <stdio.h>
int main(){
    int t, valid, lucky, win, bonus, lose, outcome;

    printf("Enter the ticket number: \n");
    scanf("%d", &t);

    valid = (t >= 1000) && (t <= 9999);
    lucky = (t % 7 == 0) || (t % 11 == 0);
    win = valid && lucky;
    bonus = win && (t % 2 == 0);
    lose = !win;

    outcome = (bonus ? 2 : (win ? 1:0));
    printf("VALID = %d\n", valid);
    printf("LUCKY = %d\n", lucky);
    printf("WIN = %d\n", win);
    printf("BONUS = %d\n", bonus);
    printf("LOSE = %d\n", lose);
    printf("OUTCOME = %d\n", outcome);

return 0;
}