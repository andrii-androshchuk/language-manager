Language Manager
================

Language manager is a tool that will allows you to make your application available in any language.

It is possible by creating special vocabularies and save them into .ini files, after that by using our static library you may access to it inside from C++ application. 

> To create .ini files you need to download application for Windows, or you may create them by yourself following [structure](https://github.com/androschukandriy/language-manager/blob/master/INI.md) of .ini file

C++ example
-----
```c++
String file_path = "D:\\TheProject\\Language\\main.ini";
LanguageManager *lm = new LanguageManager(file_path);

lm->uploadVocabulary("deu");
lm->uploadVocabulary("eng", true);

String hello_in_english = lm->get("say.hello");
String hello_in_german 	= lm->get("say.hello", "deu");
