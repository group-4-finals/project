#include <iostream>
#include <cstdlib>
#include <ctime>


int main(){
    int bet1;
    int bet2;
    int chips;
    int idex;
    bool repeat;
    int winnings_or_loosings;
    int balance;

    std::cout<< "enter your balance "<< std::endl;
    std::cin>> balance;
   
    int ante[3] = {500, 1000, 1500};
    int casino_numbers[5] = {1,2,3,4,5};
     int size = sizeof(casino_numbers) / sizeof(casino_numbers[0]);

   std::cout << "how much do you want to bet? " << std::endl;
   for (int i = 0; i < 3; i++){
    std::cout << ante[i] << std::endl;
   }
   std::cout<<std::endl;
   std::cin >> bet1;

   std::cout << "Confirm bet: ";
    std::cin >> chips;


   std::cout<<std::endl;

   std::cout<< "place your bets " <<std::endl;
   for (int i = 0; i < 5; i++){
    std::cout << " " << casino_numbers[i] << std::endl;

   }
   std::cout<<std::endl;
    std::cin>> bet2;
   
   std::cout <<std::endl;
   srand(time(NULL));

   int index = rand() % size;
   int moment_of_truth = casino_numbers[index];
   
   std::cout << moment_of_truth << std::endl;

   if (bet2 == moment_of_truth){
    std::cout<< "we have a winner and your winnings double " << std::endl;
    winnings_or_loosings = bet1 + bet1;
    balance = winnings_or_loosings + balance;
    std::cout<< "your new balance is " << balance<<std::endl;
    }

   else{
    std::cout << "im sorry you lose your winnings "<< std::endl;
    winnings_or_loosings = bet1 - bet1;
    balance = balance - bet1;
    std::cout<< winnings_or_loosings<< std::endl;
    std::cout<< "your balance right now is "<< balance<<std::endl;
   }

    if(balance < 1500){
    std::cout<< "im sorry you cannot play anymore your balance is " << balance;
    exit(0);
    }

    else{
      std::cout<< "your balance is " << balance <<std::endl;
    }

    std::cout<<"Do you want to play again? ";
    std::cin>>repeat;

    while(repeat = "Yes" or "yes"){
   
    int ante[3] = {500, 1000, 1500};
    int casino_numbers[5] = {1,2,3,4,5};
     int size = sizeof(casino_numbers) / sizeof(casino_numbers[0]);

   std::cout << "how much do you want to bet? " << std::endl;
   for (int i = 0; i < 3; i++){
    std::cout << ante[i] << std::endl;
   }
   std::cout<<std::endl;
   std::cin >> bet1;

   std::cout << "Confirm bet: ";
    std::cin >> chips;


   std::cout<<std::endl;

   std::cout<< "place your bets " <<std::endl;
   for (int i = 0; i < 5; i++){
    std::cout << " " << casino_numbers[i] << std::endl;

   }
   std::cout<<std::endl;
    std::cin>> bet2;
   
   std::cout <<std::endl;
   srand(time(NULL));

   int index = rand() % size;
   int moment_of_truth = casino_numbers[index];
   
   std::cout << moment_of_truth << std::endl;

   if (bet2 == moment_of_truth){
    std::cout<< "we have a winner and your winnings double " << std::endl;
    winnings_or_loosings = bet1 + bet1;
    balance = winnings_or_loosings + balance;
    std::cout<<"we have a winner double your bet " << winnings_or_loosings<<std::endl;
    std::cout<< "your new balance is " << balance<<std::endl;
    }

   else{
    std::cout << "im sorry you lose your winnings "<< std::endl;
    winnings_or_loosings = bet1 - bet1;
    balance = balance - bet1;
    std::cout<< winnings_or_loosings<< std::endl;
    std::cout<< "your balance right now is "<< balance<<std::endl;
   }

    if(balance < 1500){
    std::cout<< "im sorry you cannot play anymore your balance is " << balance;
    break;
    }

    else{
      std::cout<< "your balance is " << balance <<std::endl;
    }

    std::cout<<"Do you want to play again? ";
    std::cin>>repeat;

    }
    
    return 0;
}