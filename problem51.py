"""
Given a function that generates perfectly random numbers between 1 and k (inclusive), where k is an input,
 write a function that shuffles a deck of cards represented as an array using only swaps.

It should run in O(N) time.

Hint: Make sure each one of the 52! permutations of the deck is equally likely.
"""
import random
def random_gen(k):
    return random.randint(1,k)
def swaping_cards(deck_of_cards):
    for i in range(1,52):
        swap=random_gen(i)-1
        deck_of_cards[i],deck_of_cards[swap]=deck_of_cards[swap],deck_of_cards[i]
    return deck_of_cards
deck_of_cards=[i for i in range(1,53)]
print(swaping_cards(deck_of_cards))

