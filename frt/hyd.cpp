#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    ifstream in_file ("input.txt");
    ofstream out_file ("output.txt");
    
    int lengthOfPart;
    in_file >> lengthOfPart;
    //cout << lengthOfPart << endl;
    
    string message;
    getline(in_file, message);
    getline(in_file, message);
    //cout << message;
    
    int messageLength = message.length();
    //cout << messageLength << endl;
    
    string message_reversed = "";
    for (int i = 0; i < messageLength; i++) {
        message_reversed += message[(messageLength - 1) - i];
    }
    cout << message_reversed << endl;
    
    int reminder = messageLength % lengthOfPart;
    cout << reminder;
    //message = "";
    //cout << " " << message_reversed[0];
    
    //for (int i = messageLength - 1; i > lengthOfPart; i - lengthOfPart) {
        //string temp = "";
        //if (i > messageLength - reminder) {
            //message += message_reversed[i - 2];
            //message += message_reversed[i - 1];
            //message += message_reversed[i];
            //cout << message; 
        //}
    //}
    
    return 0;
}
