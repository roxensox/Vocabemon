#include <stdlib.h>
#include <stdio.h>
#include "deck.h"
#include "flashcard.h"

int main(void) {
	deck_t* test_deck = malloc(sizeof(deck_t));
	flashcard_t* test_card = malloc(sizeof(flashcard_t));
	word_t* test_word = malloc(sizeof(word_t));

	test_word->word = "Hello";
	test_word->lang = ENGLISH;
	test_word->part = INTERJECTION;

	test_card->word = test_word;
	test_card->example_sentence = "Hello, world!";
	test_card->root = GERMANIC;

	test_deck->cards = malloc(sizeof(flashcard_t) * 52);
	test_deck->cards[0] = test_card;
	printf("%s\n", test_deck->cards[0]->word->word);
}
