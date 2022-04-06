#include "Header.h" 

using namespace std;

int main() {
	/*const int ENGLISH_COUNT = 26;*/
	ifstream fin;
	fin.open("in.txt");
	if (fin.fail()) {
		return -1;
	}

	/*char sentence[4096]{};*/

	std::stringstream buffer;
	buffer << fin.rdbuf();
	string st = buffer.str();

	string sentence_str = "";

	int e = -1;

	do {
		sentence_str = "";
		do {
			e++;
			sentence_str += st[e];
		} while (st[e] != '.' && st[e] != '!' && st[e] != '?' && st[e] != '!?' && st[e] != '?!');

		cout << sentence_str << endl;

		int sentence_length = checkCountOfWords(sentence_str);
		cout << sentence_length << endl;

		string* words = new string[sentence_length];
		fillArreyString(words, sentence_length, sentence_str);
		SwapElementsArrayString(words, sentence_length, sentence_str);
		showArr(words, sentence_length);

		delete [] words;
	} while (sentence_str != "");

	fin.close();

	return 0;
}