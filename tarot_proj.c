
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tarot_deck.h"
#include "tarot_meaning.h"

int main(){
    srand(time(NULL));
    char choice;
    int deck_size = 78;
    int deck[deck_size];
    int card_num;

    printf("How many cards would you like to pull: ");
    scanf("%d", &card_num);

    int selected_cards[card_num];
    int reversed_cards[card_num];

    //assign if card is reversed or upright
    for (int i = 0; i < card_num; i++){
        int card;
        //do while ensures no duplicate card is pulled
        do{
            card = rand() % deck_size;
        } while (deck[card] == 1);

        deck[card] = 1;
        selected_cards[i] = card;

        //0 = not reversed  1 = reversed
        reversed_cards[i] = rand() % 2;//variable to determine if the card is reversed
    }

    //print cards pulled
    printf("\nYour tarot reading is:\n");
    for(int i=0; i < card_num; i++){
        printf("%s %s\n", tarot_deck[selected_cards[i]], reversed_cards[i] ? "(reverse)" : "");
        //condition ? expression_if_true : expression_if_false;
    }

    printf("\nWould you like to know what your cards mean?(y/n): ");
    scanf(" %c", &choice);
    printf("\n");
    
    //display meaning of cards
    if(choice == 'y' || choice == 'Y'){
        for(int i=0; i < card_num; i++){
            const TarotMeaning* card = &tarot_meaning[selected_cards[i]];
            printf("%s %s: %s\n", tarot_deck[selected_cards[i]],
                   reversed_cards[i] ? "(reverse)" : "",
                   reversed_cards[i] ? card->reversed : card->upright);
        }
    }
    printf("\n");

    return 0;
}