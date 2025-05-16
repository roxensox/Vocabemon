#pragma once
#include "word.h"

enum Root {
	LATIN,
	GREEK,
	GERMANIC,
	NORSE,
};

typedef struct Flashcard {
	word_t* word;
	enum Root root;
	char* example_sentence;
} flashcard_t;
