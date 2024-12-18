
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tarot_deck.h"

int main(){
    srand(time(NULL));
    char choice;
    int deck_size = 78;
    int deck[deck_size];
    int card_place =0;
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
        //printf("\n%d", reversed_cards[i]);//print statement to check if value =0 or =1
    }
    //condition ? expression_if_true : expression_if_false;
    printf("\nYour tarot reading is:\n");
    for(int i=0; i < card_num; i++){
        printf("%s %s\n", tarot_deck[selected_cards[i]], reversed_cards[i] ? "(reverse)" : " ");
    }
    printf("\nWould you like to know what the major arcana cards mean?(y/n): ");
    scanf(" %c", &choice);
    printf("\n");
    
    //0-21 major arc
    //22-35 wands   36-49 cups  50-63 swords   64-77 pentacles
    if(choice == 'y' || choice == 'Y'){
        for(int i=0; i < card_num; i++){
            int card_place = selected_cards[i];
            if(card_place <= 22){
                // printf("%s: %s\n", tarot_deck[selected_cards[i]], reversed_cards[i] ? arc_tarot_meaning_rev[card_place] : arc_tarot_meaning[card_place]);
                if (reversed_cards[i]) {
                    printf("%s (reverse): %s\n", tarot_deck[selected_cards[i]], arc_tarot_meaning_rev[card_place]);
                } else {
                    printf("%s: %s\n", tarot_deck[selected_cards[i]], arc_tarot_meaning[card_place]);
                }
            }
        }
        printf("\n");
    }else{
        printf("Thanks for using this tarot reader!\n");
    }
    return 0;
}