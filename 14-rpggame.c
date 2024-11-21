#include <stdio.h>
#include <stdlib.h>

int gameplay(int choice, int *playerhealth, int *enemyhealth) {
    int damage;

    // Player's action
    switch (choice) {
        case 1: // Attack
            damage = rand() % 30;
            printf("Damage dealt: %d !!\n", damage);
            *enemyhealth -= damage;
            break;
        case 2: // Defend
            printf("Attack defended!!\n");
            break;
        case 3: // Run
            printf("You lost COWARDLY!!!!!\n");
            return 0; // End game because player ran away
        default:
            printf("Invalid choice\n");
            return 1; // Continue without enemy attack if invalid choice
    }

    // Check if the enemy is defeated
    if (*enemyhealth <= 0) {
        printf("You defeated the enemy! Congratulations!\n");
        return 0; // End game
    }

    // Enemy's turn to attack
    int enemyDamage = rand() % 20;
    printf("Enemy deals %d damage to you!\n", enemyDamage);
    *playerhealth -= enemyDamage;

    // Check if the player is defeated
    if (*playerhealth <= 0) {
        printf("You died! Game Over.\n");
        return 0; // End game
    }

    return 1; // Continue game
}

int main() {
    int playerhealth = 100, enemyhealth = 100, choice;

    printf("Welcome to the Grand RPG Game!\n");

    // Main game loop
    while (playerhealth > 0 && enemyhealth > 0) {
        printf("Your health: %d | Enemy health: %d\n", playerhealth, enemyhealth);
        printf("Choose your action:\n");
        printf("1. Attack\n");
        printf("2. Defend\n");
        printf("3. Run\n");

        scanf("%d", &choice);

        // Call the gameplay function and check if the game should continue
        if (!gameplay(choice, &playerhealth, &enemyhealth)) {
            break; // End game
        }
    }

    return 0;
}