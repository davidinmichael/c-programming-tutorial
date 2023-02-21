#include <stdio.h>

void deposit(float *balance, float amount) {
    *balance += amount;
    printf("Deposit successful! Your new balance is %.2f\n", *balance);
}

void withdrawal(float *balance, float amount) {
    if (*balance < amount) {
        printf("Insufficient balance!\n");
        return;
    }
    *balance -= amount;
    printf("Withdrawal successful! Your new balance is %.2f\n", *balance);
}

void check_balance(float balance) {
    printf("Your current balance is %.2f\n", balance);
}

int main() {
    float balance = 1000.0;
    deposit(&balance, 500.0);
    check_balance(balance);
    withdrawal(&balance, 800.0);
    check_balance(balance);
    return 0;
}
