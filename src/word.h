#pragma once

enum Part_of_Speech {
	VERB,
	ADVERB,
	ADJECTIVE,
	PRONOUN,
	PREPOSITION,
	CONJUNCTION,
	INTERJECTION,
};

enum Language {
	ENGLISH,
	SPANISH,
	GERMAN,
	FRENCH,
};

typedef struct Word {
	char* word;
	enum Part_of_Speech part;
	enum Language lang;
} word_t;
