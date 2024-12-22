
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tarot_deck.h"

int main(){
    srand(time(NULL));
    char choice;
    int deck_size = 78;
    int deck[deck_size];
    int card_place = 0;
    int card_num;

    printf("How many cards would you like to pull: ");
    scanf("%d", &card_num);

    int selected_cards[card_num];
    int reversed_cards[card_num];

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
    //condition ? expression_if_true : expression_if_false;
    printf("\nYour tarot reading is:\n");
    for(int i=0; i < card_num; i++){
        printf("%s %s\n", tarot_deck[selected_cards[i]], reversed_cards[i] ? "(reverse)" : " ");
    }
    printf("\nWould you like to know what your cards mean?(y/n): ");
    scanf(" %c", &choice);
    printf("\n");
    
    //issue having: not pulling correct card meaning for all cards
    if(choice == 'y' || choice == 'Y'){
        for(int i=0; i < card_num; i++){
            card_place = selected_cards[i];
            //major arcana
            if(card_place <= 21){
                if (reversed_cards[i]){
                    printf("%s (reverse): %s\n", tarot_deck[selected_cards[i]], arc_tarot_meaning_rev[card_place]);
                } else {
                    printf("%s: %s\n", tarot_deck[selected_cards[i]], arc_tarot_meaning[card_place]);
                }
            }
            //minor arcana
            if(card_place >= 22 && card_place <=77){
                if (reversed_cards[i]){
                    printf("%s (reversed): %s\n", tarot_deck[selected_cards[i]], rev_minor_arc[card_place]);
                }else{
                    printf("%s: %s\n", tarot_deck[selected_cards[i]], minor_arc[card_place]);
                }
            }
        }
    }
    printf("\n");

    return 0;
}