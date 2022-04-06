#include "Header.h"

int checkCountOfWords(string sentence_str) { //Исправно 
    int words = 2;
    int length = sentence_str.length();
    for (int i = 0; i < length; i++) {
        if (sentence_str[i] == ' ' || sentence_str[i] == ',') {
            words++;
        }
    }
    return words;
}

void fillArreyString(string* arr, int size, string sentence_str) {
    int k = 0;
    for (int i = 0; i < (size - 1); i++) {
        string word;
        arr[i] = "";
        do {
            word += sentence_str[k];
            k++;
        } while (sentence_str[k] != ' ' && sentence_str[k] != ',' && sentence_str[k] != '.' && sentence_str[k] != '!' && sentence_str[k] != '?' && sentence_str[k] != '!?' && sentence_str[k] != '?!');
        arr[i] = word;
        if (sentence_str[k] == ' ' || sentence_str[k] == ',') {
            k++;
        }
    }
    arr[size - 1] = sentence_str[k++];
}



void SwapElementsArrayString(string* arr, int size, string sentence) {
    int first = 0;
    int last = size - 1;
    int middle = last / 2;
    while (first != middle + 1) {
        string keep = arr[first];
        arr[first] = arr[last];
        arr[last] = keep;
        first++;
        last--;
    }
}

void showArr(string* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}