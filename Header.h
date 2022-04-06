#include <iostream> 
#include <ctime> 
#include <string> 
#include <cstring> 
#include <fstream>
#include <sstream>

using namespace std;

#define SKIP_FIELDS "          " 


//int factorial(int num); 
//int fibonacci(int n); 
//void change_int(int* i, string content); 
//int ask_int(string massege); 
//string ask_string(string massege); 
//void game_start(); 
//string make_upper_border(int field_size); 
//void show_first_fields(string border, int field_size, int** field1, int** field2); 
//void show_second_fields(string border, int field_size, int** field1, int** field2); 
//void first_player_move(int** enemy_field); 
//void player_move(int** enemy_field); 
int checkCountOfWords(string sentence);
void fillArreyString(string* arr, int size, string sentence_str);
void SwapElementsArrayString(string* arr, int size, string sentence);
void showArr(string* arr, int size);

//struct Word {
//	char symbol;
//	int count;
//};