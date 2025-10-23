package BlackJack;

import java.util.ArrayList;

public class Hand {
    // List to store the cards in the cards
    // Method to add a card
    // Method to calculate total value
    // Method to adjust for Aces
    // Method to display the cards
    ArrayList<SingleCard> cards;
    public Hand() {
    cards = new ArrayList<>();
}
    public void addCard(SingleCard card){
        cards.add(card);
    }
    public int calculateValue() {
    int total = 0;
    int aces = 0;

    for (SingleCard card : cards) {
        int value = card.getValue();
        if (card.getRank().equals("Ace")) {
            aces++;
            total += 11;
        } else {
            total += value;
        }
    }

    while (total > 21 && aces > 0) {
        total -= 10;
        aces--;
    }

    return total;
}
    public void display(){
    for (SingleCard card : cards) {
        System.out.println(card); 
    }
}
    }

    

    
   



        

    

