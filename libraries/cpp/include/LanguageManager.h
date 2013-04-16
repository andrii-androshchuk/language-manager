/* 
	LanguageManager
	
	

	Copyright (c) 2013 Androschuk Adndriy <androschuk.andriy@gmail.com>
*/

#ifndef LANGUAGE_MANAGER_H_
#define LANGUAGE_MANAGER_H_

#include <IniFiles.hpp>
#include <Types.hpp>

#include <vector>
#include <map>

typedef struct {

	unsigned short id;
	String name;

} LanguageManagerKey;

typedef std::vector<String> LanguageManagerLog;
typedef std::vector<LanguageManagerKey> LanguageManagerKeys;
typedef std::map<unsigned short, String> LanguageManagerVocabulary;
typedef std::map<String, LanguageManagerVocabulary> LanguageManagerVocabularies;

class LanguageManager {

private:

	LanguageManagerKeys keys;

 	LanguageManagerVocabularies vocabularies;

 	LanguageManagerLog log;

 	String default_vocabulary_name;

 	String file_path;

public:

	LanguageManager(String file_path);

	LanguageManagerLog getLog();

	
 	bool uploadVocabulary(String vocabulary_name, bool is_default_vocabulary = false);
 	bool isUploadedVocabulary(String vocabulary_name);

 	/**
 	 *	
 	*/
	String get(String key, String vocabulary_name = "");
};

#endif