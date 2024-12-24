# Tarot Card Reader! 🎱
A C-based tarot card reading program that randomly selects and displays tarot cards, including their upright or reversed orientation, and provides their meanings.

### Some key features of the program
- Randomly selects a user-defined number of tarot cards from a full 78-card deck.
- Determines if each card is upright or reversed.
- Displays the name of each card and its orientation.
- Provides the upright and reversed meanings of selected cards upon request.

## Table of Contents
- [Usage](#usage)
- [Files](#files)
- [Future Enhancements](#future-enhancements)
- [Learned](#learned)
- [Acknowledgments](#acknowledgments)

## Usage
1. Run the program.
2. Enter the number of cards to pull when prompted.
3. View the cards pulled.
4. Choose whether to view the card meanings.

Example usage:
```
How many cards would you like to pull: 3

Your tarot reading is:
Eight of Cups (reverse)
Queen of Pentacles (reverse)
Four of Pentacles 

Would you like to know what your cards mean?(y/n): y

Eight of Cups (reverse): Fear of moving on, indecision, avoidance.
Queen of Pentacles (reverse): Selfishness, imbalance, overworking.
Four of Pentacles : Security, saving, control.
```

## Files
1. `tarot_proj.c` is the main program file.
2. `tarot_deck.h` is the header file containing the full tarot deck.
3. `tarot_meaning.h` is the header file containing the meanings of each card, upright and reverse.
   
## Future Enhancements
- Allow users to save card pulls in a `.txt` file.
- Allow users to integrate custom decks.
- Possible integration of fleshed out UI.

## Learned
- Reinforcement of `struct` concepts learned in class.
- Reinforcement of `conditional` or `ternary` operator implementation in C.
- Implementation of header files in C.
- Optimization of string based arrays in header files.

## Acknowledgments
- [Tarot Card Meaning](https://labyrinthos.co/blogs/tarot-card-meanings-list?srsltid=AfmBOoqjhRLhqDlfjAZBjXs2ALDIMBRSUWOCJHPsDq9UwSY6_DYi4i9G)
- Thanks to the open-source community for assistance and inspiration in stuct based programs.


