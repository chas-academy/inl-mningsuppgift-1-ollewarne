#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    int dice_rolls[100];
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int sum = 0;

    for (int i = 0; i < 100; i++){
        int dice_roll = (rand() % 6) + 1;
        dice_rolls[i] = dice_roll;
    }

    for (int i = 0; i < 100; i++){
        if (dice_rolls[i] == 1){
            one++;
        } else if (dice_rolls[i] == 2){
            two++;
        } else if (dice_rolls[i] == 3){
            three++;
        } else if (dice_rolls[i] == 4){
            four++;
        } else if (dice_rolls[i] == 5){
            five++;
        } else if (dice_rolls[i] == 6){
            six++;
        }
        sum += dice_rolls[i];
    }

    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", three);
    printf("%d\n", four);
    printf("%d\n", five);
    printf("%d\n", six);
    printf("%d\n", sum);
    printf("%.1f\n", sum / 100.0);


    return 0;
}
