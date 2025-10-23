package BlackJack;

import java.util.ArrayList;
import java.util.Collections;

public class Deck_of_cards {
    

    private ArrayList<SingleCard> deck;
    public Deck_of_cards() {
        this.deck = createDeck();
        Collections.shuffle(deck);
    }

   
    private ArrayList<SingleCard> createDeck() {
        String[] Rank = {"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
        String[] card_suites = {"Spades", "Clubs", "Hearts", "Diamonds"};

        ArrayList<SingleCard> newDeck = new ArrayList<>();

        for (String suit : card_suites) {
            for (int j = 0; j < Rank.length; j++) {
                int value;
                if (j <= 8) { // 2–10
                    value = j + 2;
                } else if (j <= 11) { // J, Q, K
                    value = 10;
                } else { // Ace
                    value = 11;
                }
                newDeck.add(new SingleCard(Rank[j], suit, value));
            }
        }
        return newDeck;
    }

    public SingleCard drawCard() {
        return deck.remove(0);
    }

    
}         