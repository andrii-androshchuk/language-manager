#include <LanguageManager.h>

// Full path to file (include .ini at the end)
String file_path = "D:\\TheProject\\Language\\main.ini";

// Create new instnace of manager
LanguageManager *lm = new LanguageManager(file_path);

// Upload needed vocabularies
// 	Takes one parameter - the name of vocabulary.
//	Boolean parameter is no required. This means that passed name of vocabulary will be using as default.
lm->uploadVocabulary("deu");
lm->uploadVocabulary("eng", true);

// Get value of language key
String hello_in_english = lm->get("say.hello");
String hello_in_german 	= lm->get("say.hello", "deu");