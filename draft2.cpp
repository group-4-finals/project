#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
using namespace std;

void countdown(int hours) {
    int seconds = hours * 3600;

    for (int i = seconds; i >= 0; --i) {
        std::cout << "Time left: " << i << " seconds\r" << std::flush;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "Time's up!" << std::endl;
}

int main() {
    // System Variables
    int system_time;
    int money;
    string name;
    int opt;
    int length_password;
    char choice;
    string signup_username;
    string signup_password;
    string login_username;
    string login_password;
    char topup;
    int duration;
    int games;
    bool repeat = true; // Initialize repeat

    // Game Variables
    int bet1;
    int bet2;
    int chips;
    int winnings_or_loosings;
    int balance;

    cout << "hello [1] sign in or [2] log in: ";
    cin >> opt;

    if (opt == 1) {
        cout << "Hello please enter a username: ";
        cin >> signup_username;

        do {
            cout << "Hello please enter a password (Note password must be 6 characters long): ";
            cin >> signup_password;

            length_password = signup_password.length();

            if (length_password < 6) {
                cout << "Password is too short\n";
            } else {
                cout << "Password success\n";
            }
        } while (length_password < 6);
    } else if (opt == 2) {
        do {
            cout << "Enter your username: ";
            cin >> login_username;

            cout << "Enter password: ";
            cin >> login_password;

            if (login_username != signup_username || login_password != signup_password) {
                cout << "Either your username or password is wrong, please input the right credentials";
            } else {
                cout << "Welcome " << login_username << endl;
            }

        } while (login_username != signup_username || login_password != signup_password);
    }

    cout << "Hello user, please enter your username: ";
    cin >> name;

    do {
        do {
            cout << "Hello " << name << ", input the amount of hours you want to play: ";
            cin >> system_time;

            cout << "You have input " << system_time << " hours. Do you wish to confirm (Y/N)? ";
            cin >> choice;
        } while (choice == 'N');

        cout << "Note that 1 hour is ₱30. Please input amount of money: ";
        cin >> money;

        int intervals = system_time * 30;
        int change = money - intervals;

        if (money >= intervals) {
            cout << "Transaction complete. Total amount is ₱" << intervals << ". Your change is: ₱" << change << "." << endl;
        } else {
            cout << "Insufficient funds. You need ₱" << intervals - money << " more." << endl;
        }

        countdown(system_time);

        cout << "What game do you want to play? [1] Guessing game: ";
        cin >> games;

        switch (games) {
            case 1:
                cout << "Enter your balance: ";
                cin >> balance;

                do {
                    int ante[3] = {500, 1000, 1500};
                    int casino_numbers[5] = {1, 2, 3, 4, 5};
                    int size = sizeof(casino_numbers) / sizeof(casino_numbers[0]);

                    cout << "How much do you want to bet? " << endl;
                    for (int i = 0; i < 3; i++) {
                        cout << ante[i] << endl;
                    }
                    cout << endl;
                    cin >> bet1;

                    cout << "Confirm bet: ";
                    cin >> chips;

                    cout << endl;

                    cout << "Place your bets: " << endl;
                    for (int i = 0; i < 5; i++) {
                        cout << " " << casino_numbers[i] << endl;
                    }
                    cout << endl;
                    cin >> bet2;

                    cout << endl;
                    srand(time(NULL));

                    int index = rand() % size;
                    int moment_of_truth = casino_numbers[index];

                    cout << moment_of_truth << endl;

                    if (bet2 == moment_of_truth) {
                        cout << "We have a winner and your winnings double " << endl;
                        winnings_or_loosings = bet1 + bet1;
                        balance = winnings_or_loosings + balance;
                        cout << "Your new balance is " << balance << endl;
                    } else {
                        cout << "I'm sorry you lose your winnings " << endl;
                        winnings_or_loosings = bet1 - bet1;
                        balance = balance - bet1;
                        cout << winnings_or_loosings << endl;
                        cout << "Your balance right now is " << balance << endl;
                    }

                    if (balance < 1500) {
                        cout << "I'm sorry you cannot play anymore, your balance is " << balance;
                        exit(0);
                    } else {
                        cout << "Your balance is " << balance << endl;
                    }

                    cout << "Do you want to play again (Y/N)? ";
                    char play_again;
                    cin >> play_again;
                    repeat = (play_again == 'Y' || play_again == 'y');
                } while (repeat);
                break;
        }

        cout << "Do you want to top up? (Y/N): ";
        cin >> topup;

    } while (topup == 'Y' || topup == 'y');

    cout << "Okay user, goodbye." << endl;

    return 0;
}
